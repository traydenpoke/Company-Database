#include <iostream>
#include <string>
#include <vector>
#include "employee.h"

std::vector<Employee> empList;
int id = 100;
void getInput();
int addEmp(Employee e);
Employee* removeEmp(std::string s);
void displayEmp();

int main() {
	getInput();

	return 0;
}

/*
* Prints prompt to screen, then gets users choice and calls functions accordingly. 
*/
void getInput() {
	int input;
	std::string name;
	Employee *emp;
	do {
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Enter 1 to display employee list." << std::endl;
		std::cout << "Enter 2 to add employee to list." << std::endl;
		std::cout << "Enter 3 to remove employee from list." << std::endl;
		std::cout << "Enter anything else to exit program." << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Enter number: ";
		std::cin >> input;
		std::cin.ignore();
		switch(input) {
			case 1:
				displayEmp();
				break;
			case 2:
				std::cout << "\nEnter name of employee to add: ";
				std::getline(std::cin, name);
				addEmp(Employee(id, name));
				id++;
				break;
			case 3:
				std::cout << "\nEnter name to remove from list: ";
				std::getline(std::cin, name);
				emp = removeEmp(name);
				break;
			// case 4:
				// display previously removed employee
			default:
				std::cout << "\nExiting program.";
				break;
		}
		std::cout << "\n";
	} while (input >= 1 && input <= 3);
}

/*
* Adds employee to employee list, returns its id.
*/
int addEmp(Employee e) {
	empList.push_back(e);
	std::cout << "Added employee \"" << e.name << "\" to list with ID " << e.id << "." << std::endl;
	return e.id;
}

/*
* Removes employee from list by name and returns it.
* Searches to see if the employee name exists; if so, returns pointer to it, otherwise nullptr.
*/
Employee* removeEmp(std::string s) {
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
void displayEmp() {
	if (empList.empty()) { std::cout << "\nNo employees in the system." << std::endl; }
	for (int i = 0; i < empList.size(); i++) {
		Employee e = empList[i];
		std::cout << "\nEmployee " << e.id << ": " << e.name << std::endl;
	}
}