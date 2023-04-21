#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
	public:
		Employee(int id, std::string name);
		Employee();
		int empId;
		std::string name;
		std::string toString();
};

#endif