#include <iostream>
#include<unistd.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>
#include<syslog.h>
using namespace std;

#define log_err(fmt, ...) syslog(LOG_ERR,fmt,##__VA_ARGS__)
#define log_info(fmt, ...) syslog(LOG_INFO,fmt,##__VA_ARGS__)
#define log_warning(fmt, ...) syslog(LOG_WARNING,fmt,##__VA_ARGS__)
#define log_dbg(fmt, ...) syslog(LOG_DEBUG,fmt,##__VA_ARGS__)


int main(){


    openlog("Zeratul", LOG_CONS | LOG_PID | LOG_PERROR, LOG_USER);
    
    log_err("error\n");
    log_dbg("debug\n");
    log_warning("waring\n");
    log_info("loginfo\n");

    return 0;
}
