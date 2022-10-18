#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cmath>

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
	virtual void setSal(int s) 
	{
		sal = s;
	};
	virtual void setVac(int v)
	{
		vac = v;
	};
	virtual void setIns(int i) 
	{
		ins = i;
	};
	void test() {
		cout << endl << endl;
	}

private:
	double sal;
	int vac;
	int ins;
};

class Professional : public Employee
{

public:
	double calcSalary(double m) {
		const double monthlySalary = m; //5000$ monthly salary
		return monthlySalary;
	}
	int vacationDays(int d) {
		const int paidVacation = d; //15 days paid vacation per year
		return paidVacation;
	}
	double healthCare(double h) {
		const double healthInsurance = h; //7000$ per year
		return healthInsurance;
	}
	void setSal(double s)
	{
		monthSal = s;
	}
	void setVac(int v)
	{
		vacation = v;
	}
	void setIns(double i)
	{
		insurance = i;
	}
private:
	double monthSal;
	int vacation;
	double insurance;
};

class Nonprofessional : public Employee
{
	double calcSalary(double hours)
	{
		const double rate = 18; //18$ per hour
		double weeklySalary = hours * rate; //weekly hours will be asked for and inputed and weekly salary calculated
		cout << endl << " The weekly salary for this employee is: " << weeklySalary << endl;
		return weeklySalary;
	}

	int vacationDays(double hours)
	{
		const double days = 0.006667; //multiplied by the hours worked, this would be 1 day per 150 hours worked
		int paidVacation = round((days * hours) * 52);
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
	void setSal(int s) 
	{
		weekSal = s;
	}
	void setVac(int v)
	{
		vacation = v;
	}
	void setIns(double i) 
	{
		insurance = i;
	}
	
private:
	double weekSal;
	int vacation;
	double insurance;
};


#endif





