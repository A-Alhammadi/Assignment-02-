#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class Employee
{
public:
	virtual double calcSalary(double hours) {
		double salary = 0;
		return salary;
	}
	virtual int vacationDays(double hours) {
		int days = 0;
		return days;
	}
	virtual double healthCare(double hours) {
		double ins = 0;
		return ins;
	}
};

class Professional : public Employee
{

public:
	double calcSalary() {
		const double monthlySalary = 5000; //5000$ monthly salary
		return monthlySalary;
	}
	int vacationDays() {
		const int paidVacation = 15; //15 days paid vacation per year
		return paidVacation;
	}
	double healthCare() {
		const double healthInsurance = 7000; //7000$ per year
		return healthInsurance;
	}
};

class Nonprofessional : public Employee
{
	double calcSalary(double hours)
	{
		const double rate = 15;
		double weeklySalary = hours * rate;
		cout << endl << " The weekly salary for this employee is: " << weeklySalary << endl;
		return weeklySalary;
	}

	int vacationDays(double hours)
	{
		const double days = 0.006667; //multiplied by the hours worked, this would be 1 day per 150 hours worked
		double paidVacation = (days * hours) * 52;
		cout << endl << " The number of paid vaction days for this employee per year will be: " << paidVacation << endl;
		return paidVacation;
	}

	double healthCare(double hours)
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
};


#endif





