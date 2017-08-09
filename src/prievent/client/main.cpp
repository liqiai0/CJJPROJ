#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
extern "C"{
#include <event.h>
#include <event2/util.h>
}

int tcpConnectServer(char *ip, int port);
void cmdMsgCb(int fd, short events, void *arg);
void socketReadCb(int fd, short events, void *arg);

static void useage(void)
{
    printf("please use 2 parameters\n");
    printf("please use ./priserver ip port\n");
}

int main(int argc, char *argv[]) {
    
    if(argc < 3) {
        useage();
        return -1;
    }

    int socketId=tcpConnectServer(argv[1], atoi(argv[2]));

    if(socketId == -1) {
        printf("socketId error\n");
        return -1;
    }

    printf("connect to server successful\n");

    struct event_base *base = event_base_new();
    
    struct event *ev_socket = event_new(base, socketId, EV_READ | EV_PERSIST, socketReadCb, NULL);
    event_add(ev_socket, NULL);
    
    struct event *ev_cmd = event_new(base, 0, EV_READ | EV_PERSIST, cmdMsgCb, (void *)&socketId);
    event_add(ev_cmd, NULL);

    event_base_dispatch(base);

//STDIN_FILENO
    return 0;
} 


int tcpConnectServer(char *ip, int port)
{
    int socketId, statues, err;
    struct sockaddr_in serAddr;
    
    memset(&serAddr, 0, sizeof(struct sockaddr_in));
    serAddr.sin_family = AF_INET;
    serAddr.sin_port = htons(port);
    statues = inet_aton(ip, &serAddr.sin_addr);
    
    
    if(statues == 0) {
        err = EINVAL;
        return -1;
    }

    socketId = socket(PF_INET, SOCK_STREAM, 0);
    if(socketId == -1) return socketId;
    
    statues = connect(socketId, (const struct sockaddr *)&serAddr, sizeof(struct sockaddr));
    if(statues != 0) {
        err = errno;
        close(socketId);
        errno = err;
        printf("connect error:%s,line:%d\n", strerror(errno), __LINE__);
        return -1;
    }

    evutil_make_socket_nonblocking(socketId);

    return socketId;
}

void cmdMsgCb(int fd, short events, void *arg)
{
    char msg[1024];
    int ret = read(fd, msg, sizeof(msg)-1);
    if(ret <= 0) {
        printf("%s,line:%d", strerror(errno), __LINE__);
        return;
    }
    int sockId = * (int *)arg;

    write(sockId, msg, ret);
}

void socketReadCb(int fd, short events, void *arg)
{
    char msg[1024];
    int len = read(fd, msg, sizeof(msg)-1);
    if(len <= 0) {
        printf("read msg error\n");
        exit(1);
    }
    msg[len] = '\0';
    printf("receive data:%s\n", msg);
}





