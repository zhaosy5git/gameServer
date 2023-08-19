#include <iostream>
#include "../src/log.h"

int main(int argc, char** argv) {
    sy::Logger::ptr logger(new sy::Logger);
    logger->addAppender(sy::LogAppender::ptr(new sy::StdoutLogAppender));
    
    sy::LogEvent::ptr event(new sy::LogEvent(__FILE__, __LINE__, 0, 1, 2, time(0)));

    logger->log(sy::LogLevel::DEBUG, event);

    return 0;
}