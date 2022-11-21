#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int id, string name) {
    this->id = id;
    this->name = name;
}    

Employee::Employee() {
    this->id = -1;
    this-> name = " ";
}

void Employee::setId(int id) {
    this->id = id;
}    
