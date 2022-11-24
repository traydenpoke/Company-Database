#include "employee_utils.h"
#include "employee.h"
#include <iostream>
#include <string>
#include <vector>

/*
* Adds employee to employee list, returns its id.
*/
int EmployeeUtils::addEmp(Employee e, std::vector<Employee>& empList) {
	empList.push_back(e);
	std::cout << "Added employee \"" << e.name << "\" to list with ID " << e.empId << "." << std::endl;
	return e.empId;
}

/*
* Removes employee from list by name and returns it.
* Searches to see if the employee name exists; if so, returns pointer to it, otherwise nullptr.
*/
Employee* EmployeeUtils::removeEmp(std::string s, std::vector<Employee>& empList) {
	for (int i = 0; i < empList.size(); i++) {
		if (empList[i].name == s) {
			Employee* e = &empList[i];
			empList.erase(empList.begin() + i);
			std::cout << s << " successfully removed." << std::endl;
			return e;
		}
	}
	std::cout << s << " not found." << std::endl;
	return nullptr;
}

/*
* Iterates over employee list and displays their information 1 by 1.
*/
void EmployeeUtils::displayEmp(const std::vector<Employee>& empList) {
	if (empList.empty()) { std::cout << "No employees in the system.\n"; }

	for (int i = 0; i < empList.size(); i++) {
		Employee e = empList[i];
		std::cout << e.toString();
	}
}