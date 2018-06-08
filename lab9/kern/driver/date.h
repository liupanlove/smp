#ifndef DATE_H
#define DATE_H
#include <defs.h>

struct rtcdate {
    uint32_t second;
    uint32_t minute;
    uint32_t hour;
    uint32_t day;
    uint32_t month;
    uint32_t year;
};


#endif