#include "employee.h"
#include <iostream>
#include <sstream>

Employee::Employee(int id, std::string name) {
    this->empId = id;
    this->name = name;
}    

Employee::Employee() {
    this->empId = -1;
    this->name = " ";
} 

std::string Employee::toString() {
    std::ostringstream s;
    s << "Employee " << this->empId << ": " << this->name << ".\n";
    return s.str();
}
