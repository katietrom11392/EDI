#include <stack>
#include "schedule.h"

Schedule::Schedule(){
    head = nullptr;
}

void Schedule::initilize(std::string employee){
    std::string start = "", end = "", date = "";
    //for (line in dbcall(table shifts AND employee) ){
    //start = line.substr()
    //etc...
        //addShift(&Shift(start, end, date)); << THE following line was causing a comiler error
    //}
}

void Schedule::addShift(Shift *addition){
    if (head == nullptr)
        head = addition;
    if ( compareDates(addition->date, head->date) ){
        addition->next = head;
        head->next = addition;
    } else if(head->next == nullptr) {
        head->next = addition;
    } else {
        Shift *finger;
        finger = head->next;
        addition->next = head;
        do{
            if(compareDates(addition->date, finger->date)){
                addition->next->next = addition;
                addition->next = finger;
                break;
            }
        }while(finger != nullptr);
        if (finger == nullptr){
            addition->next->next = addition;
            addition->next = nullptr;
        }
    }

}

bool Schedule::compareDates(std::string aTrue, std::string bFalse){
    //returns true if aTrue is more recent than bFalse
    // MM/DD/YY
    if (aTrue.substr(6,2) > bFalse.substr(6,2)){
        return true;
    } else if (aTrue.substr(6,2) < bFalse.substr(6,2)){
        return false;
    } else {
        if (aTrue.substr(0,2) > bFalse.substr(0,2)){
            return true;
        } else if (aTrue.substr(0,2) < bFalse.substr(0,2)){
            return false;
        } else {
            if (aTrue.substr(3,2) > bFalse.substr(3,2)){
                return true;
            } else {
                return false;
            }
        }
    }
}

Shift* Schedule::removeShift(std::string date){
    //special case checkers
    if (head == nullptr)
        return nullptr;

    Shift *finger = head;
    if (head->date == date){
        head = head->next;
        return finger;
    } else if(head->next == nullptr)
        return nullptr;

    do{
        if (finger->next->date == date)
            break;
        finger = finger->next;
    } while(finger->next != nullptr);

    if (finger->next == nullptr)
            return nullptr;
    else {
            Shift *tac = finger->next;
            finger->next = tac->next;
            return tac;
    }
}

Shift* Schedule::findShift(std::string date){
    Shift *finger = head;
    while (finger != nullptr || finger->date != date)
        finger = finger->next;
    return finger;
}

Schedule::~Schedule(){
    Shift *terminator = head;
    while(head != nullptr){
        head = terminator->next;
        delete terminator;
        terminator = head;
    }
}
