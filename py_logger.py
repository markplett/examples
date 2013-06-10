#!/usr/bin/env python

from gnuradio import gr
    # Add logging
#gr.logger_config("")
statLog=gr.logger("STATS")
statLog.add_console_appender("stdout","%m%n");
statLog.set_level("DEBUG")
eventLog=gr.logger("EVENTS")
eventLog.add_console_appender("stdout","%m%n");
eventLog.set_level("DEBUG")

print gr.logger_get_names()
statLog.debug("Stat logging");
eventLog.debug("Event logging");

