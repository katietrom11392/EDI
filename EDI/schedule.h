#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "shift.h"

class Schedule {
public:
    //Employee *person
    Schedule();
    void initilize(std::string employee);
    void addShift(Shift *addition);
    Shift* removeShift(std::string date); //returns the Shift it removes
    Shift* findShift(std::string date); //finds first occurrence only
    ~Schedule();

private:
    Shift *head;

    bool compareDates(std::string aTrue, std::string bFalse);
};

#endif // SCHEDULE_H
