/****************************************************************
*  Test program to validate GNURadiol logging C++ programatic
*  configuration
*
*  Author: Mark Plett
*  Updated: 6/10/2013 
* 
* Build with
* g++ cpp_logger.cc -o cpp_logger -lboost_system -llog4cpp -lgnuradio-runtime
****************************************************************/

#include <gnuradio/logger.h>

int main(void){

//  GR_CONFIG_LOGGER(""); 
  GR_LOG_GETLOGGER(LOG,"stats");
  GR_LOG_ADD_CONSOLE_APPENDER(LOG,"stdout","%m%n");
  GR_LOG_SET_LEVEL(LOG,"DEBUG");
  GR_LOG_DEBUG(LOG,"Test message");



return 0;
}

