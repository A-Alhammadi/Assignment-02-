#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Header.h"


using namespace std;

int main() {
	int hours;
	Professional prof;
	Nonprofessional non;
	Employee* professional = &prof;
	Employee* nonprofessional = &non;

	cout << "Enter the number of hours the employee works in a week: " << endl;
	cin >> hours;

	nonprofessional->calcSalary(hours);
	nonprofessional->vacationDays(hours);
	nonprofessional->healthCare(hours);





	return 0;
}