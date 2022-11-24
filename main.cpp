#include <iostream>
#include <string>
#include <vector>
#include "employee_utils.h"
#include "employee.h"

std::vector<Employee> empList;
int id = 100;
void getInput();


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
		std::cout << "\n";
		switch(input) {
			case 1:
				EmployeeUtils::displayEmp(empList);
				break;
			case 2:
				std::cout << "Enter name of employee to add: ";
				std::getline(std::cin, name);
				EmployeeUtils::addEmp(Employee(id, name), empList);
				id++;
				break;
			case 3:
				std::cout << "Enter name to remove from list: ";
				std::getline(std::cin, name);
				emp = EmployeeUtils::removeEmp(name, empList);
				break;
			// case 4:
				// display previously removed employee
			default:
				std::cout << "Exiting program.";
				break;
		}
		std::cout << "\n";
	} while (input >= 1 && input <= 3);
}
