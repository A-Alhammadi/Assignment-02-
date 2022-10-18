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

	//nonprofessional->calcSalary(hours);
	double s = nonprofessional->calcSalary(hours);
	nonprofessional->setSal(s);

	//nonprofessional->vacationDays(hours);
	int v = nonprofessional->vacationDays(hours);
	nonprofessional->setVac(v);

	//nonprofessional->healthCare(hours);
	double i = nonprofessional->healthCare(hours);
	nonprofessional->setIns(i);
	





	return 0;
}
