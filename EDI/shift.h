#ifndef SHIFT_H
#define SHIFT_H
#include <string>

class Shift {

public:
    const std::string start;
    const std::string end;
    const std::string date;

    Shift *next; // used for the linked list in Schedule

    Shift(std::string a, std::string b, std::string c) :
        start(a), end(b), date(c), actualStart(""), actualEnd("") {};
    void clockIn(std::string time);
    void clockOut(std::string time);
    std::string beginTime();
    std::string endTime();
    int timeWorked();

private:
    std::string actualStart;
    std::string actualEnd;
};

#endif // SHIFT_H
