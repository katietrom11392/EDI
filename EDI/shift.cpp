#include "shift.h"

void Shift::clockIn(std::string time){
    if (actualStart == "")
        actualStart = time;
}

void Shift::clockOut(std::string time){
    if (actualEnd == "")
        actualEnd = time;
}

std::string Shift::beginTime(){
    return actualStart;
}

std::string Shift::endTime(){
    return actualEnd;
}

int Shift::timeWorked(){
    // presuming start and end times are in 24hr
    // and Hour:Minute:Second
    if ( beginTime() == "" || endTime() == "")
        return 0;

    float time = 0.0; //fractional hours
    time = std::stoi(endTime().substr(0,2)) -
            std::stoi(beginTime().substr(0,2));

    //minutes to hours
    time += (std::stoi(endTime().substr(3,2)) -
            std::stoi(beginTime().substr(3,2))) / 60.0;

    //seconds to hours
    time += (std::stoi(endTime().substr(6,2)) -
            std::stoi(beginTime().substr(6,2))) / 3600.0;

    return time;
}
