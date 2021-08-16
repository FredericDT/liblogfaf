#ifndef __LIBLOGFAF_H__
#define __LIBLOGFAF_H__

void syslog_time(int priority, time_t ts, const char *format, ...);

#endif /* ! __LIBLOGFAF_H__ */