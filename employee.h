#include <iostream>

struct Employee {
	Employee(int id, std::string name);
	Employee();
	int id;
	std::string name;
	void setId(int id); // needed for when an employee leaves company
};