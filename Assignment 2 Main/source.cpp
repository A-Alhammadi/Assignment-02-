#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Header.h"


using namespace std;

int main() {
	int hours;
	double m;
	int d;
	double h;
	int type; 
	
	Professional prof;
	Nonprofessional non;
	Employee* professional = &prof;
	Employee* nonprofessional = &non;

	cout << " Enter the employee type: enter 1 for professional or 2 for nonprofessional: " << endl;
	cin >> type;
	while (type < 1 || type > 2) {
		cout << " Please enter either 1 for professional or 2 for nonprofessional: " << endl;
		cin >> type;
	}
	while (type == 1 || type == 2) {
		switch (type) {
		case 1:
		{
			cout << endl << " You have chosen professional employee, please enter the required information for this employee. " 
				<< endl << " Enter the monthly salary of this professional employee: " << endl;
			cin >> m;
			double sp = professional->calcSalary(m);
			professional->setSal(sp);

			cout << endl << " Enter the number of vacation days for this employee: " << endl;
			cin >> d;
			int vp = professional->vacationDays(d);
			professional->setVac(vp);

			cout << endl << " Enter the yearly health insurance for this employee: " << endl;
			cin >> h;
			double ip = professional->healthCare(h);
			professional->setIns(ip);

			cout << endl << " This employee's information was enetered as follows: " << endl << " Monthly Salary : " << m << endl
				<< " Yearly Paid Vacation days: " << d << endl << " Yearly Health Insurance: " << h << endl;
			break;
			
		}

		case 2:
		{
			cout << endl << " You have chosen Nonprofessional employee, please enter the number of hours the employee works in a week: " << endl;
			cin >> hours;
			double sn = nonprofessional->calcSalary(hours);
			nonprofessional->setSal(sn);

			int vn = nonprofessional->vacationDays(hours);
			nonprofessional->setVac(vn);

			double in = nonprofessional->healthCare(hours);
			nonprofessional->setIns(in);
			cout << endl << " This employee's information is as follows: " << endl << " Weekly Salary: " << sn
				<< endl << " Yearly Vacation Days: " << vn << endl << " Monthly Health Insurance: " << in << endl;
			break;
		}
		}
		break;
	}

	return 0;
}
