// ComplaintScreen.cpp

#include "ComplaintScreen.h"
#include <ctime>    // For time(), localtime()
#include <iomanip>  // For the put_time
#include <string>   // For a string

int generateComplaintNumber() {
    // Use current time as seed for complaint number generation
    time_t now = time(nullptr);
    struct tm localTime;
    localtime_s(&localTime, &now); // Get local time

    // Generate complaint number in YYYYMMDDHHMMSS format
    int complaintNumber = (localTime.tm_year + 1900) * 10000000000 +
        (localTime.tm_mon + 1) * 100000000 +
        localTime.tm_mday * 1000000 +
        localTime.tm_hour * 10000 +
        localTime.tm_min * 100 +
        localTime.tm_sec;
    return complaintNumber;
}
