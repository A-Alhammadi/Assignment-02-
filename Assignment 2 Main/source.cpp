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
	
	Professional prof;//object for professional employee class
	Nonprofessional non;//object for nonprofessional employee class
	Employee* professional = &prof; // pointer to use derived class for professional
	Employee* nonprofessional = &non;// pointer to use derived class for nonprofessional

	cout << " Enter the employee type: enter 1 for professional or 2 for nonprofessional: " << endl;
	cin >> type;
	while (type < 1 || type > 2) { //user inputs 1 or 2. If any othher input is entered, they will be asked again
		cout << " Please enter either 1 for professional or 2 for nonprofessional: " << endl;
		cin >> type;
	}
	while (type == 1 || type == 2) {//while  type is either 1 or 2, the switch statement below will be called
		switch (type) {
		case 1: //this is for the professional option
		{
			cout << endl << " You have chosen professional employee, please enter the required information for this employee. " 
				<< endl << " Enter the monthly salary of this professional employee: " << endl;
			cin >> m; //this would be the monthly salary
			double sp = professional->calcSalary(m);//this calls the calcSalary function and sets the double dp to whatever the function calculates
			professional->setSal(sp); //set function to set private variable

			cout << endl << " Enter the number of vacation days for this employee: " << endl;
			cin >> d;//this is the number of vacation days...
			int vp = professional->vacationDays(d);
			professional->setVac(vp);

			cout << endl << " Enter the yearly health insurance for this employee: " << endl;
			cin >> h;
			double ip = professional->healthCare(h);
			professional->setIns(ip);

			cout << endl << " This employee's information was enetered as follows: " << endl << " Monthly Salary : " << m << endl
				<< " Yearly Paid Vacation days: " << d << endl << " Yearly Health Insurance: " << h << endl;//prints information for the employee
			break;
			
		}

		case 2: //this is for the nonprofessional option
		{
			cout << endl << " You have chosen Nonprofessional employee, please enter the number of hours the employee works in a week: " << endl;
			cin >> hours;
			double sn = nonprofessional->calcSalary(hours);//same idea as the above functions
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
