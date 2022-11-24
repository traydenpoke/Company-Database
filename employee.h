#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
	public:
		Employee(int id, std::string name);
		Employee();
		int empId;
		std::string name;
		void setId(int id); // needed for when an employee leaves company
		std::string toString();
		// static int id; // for keeping track of current id so main doesn't need to give id in constructor; TODO
};

#endif