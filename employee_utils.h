#ifndef EMPLOYEE_UTILS_H
#define EMPLOYEE_UTILS_H
#include "employee.h"
#include <vector>

class EmployeeUtils {
    public:
        static int addEmp(Employee e, std::vector<Employee>& empList);
        static Employee* removeEmp(std::string s, std::vector<Employee>& empList);
        static void displayEmp(const std::vector<Employee>& empList);
};

#endif