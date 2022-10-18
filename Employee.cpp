#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cmath>
#include "Header.h"

using namespace std;


 double Employee::calcSalary(double hours) {
		double salary = 0;
		return salary;
	}
	 int Employee::vacationDays(double hours) {
		int days = 0;
		return days;
	}
	 double Employee::healthCare(double hours) {
		double ins = 0;
		return ins;
	}
	void Employee::setSal(int s)
	{
		sal = s;
	};
	void Employee::setVac(int v)
	{
		vac = v;
	};
	void Employee::setIns(int i)
	{
		ins = i;
	};
	

	double Professional::calcSalary(double m) {
		const double monthlySalary = m; //5000$ monthly salary
		return monthlySalary;
	}
	int Professional::vacationDays(int d) {
		const int paidVacation = d; //15 days paid vacation per year
		return paidVacation;
	}
	double Professional::healthCare(double h) {
		const double healthInsurance = h; //7000$ per year
		return healthInsurance;
	}
	void Professional::setSal(double s)
	{
		monthSal = s;
	}
	void Professional::setVac(int v)
	{
		vacation = v;
	}
	void Professional::setIns(double i)
	{
		insurance = i;
	}


	double Nonprofessional::calcSalary(double hours)
	{
		const double rate = 18; //18$ per hour
		double weeklySalary = hours * rate; //weekly hours will be asked for and inputed and weekly salary calculated
		cout << endl << " The weekly salary for this employee is: " << weeklySalary << endl;
		return weeklySalary;
	}

	int Nonprofessional::vacationDays(double hours)
	{
		const double days = 0.006667; //multiplied by the hours worked, this would be 1 day per 150 hours worked
		int paidVacation = round((days * hours) * 52);
		cout << endl << " The number of paid vaction days for this employee per year will be: " << paidVacation << endl;
		return paidVacation;
	}

	double Nonprofessional::healthCare(double hours)
	{
		const double standardIns = 400;
		const double higherIns = 600;
		double insurance;

		if (hours >= 48)
			insurance = higherIns;
		else if (hours >= 30)
			insurance = standardIns;
		else
			insurance = 0;
		cout << endl << " The monthly health insurance for this employee will be: " << insurance << endl;
		return insurance;
	}
	void Nonprofessional::setSal(int s)
	{
		weekSal = s;
	}
	void Nonprofessional::setVac(int v)
	{
		vacation = v;
	}
	void Nonprofessional::setIns(double i)
	{
		insurance = i;
	}


