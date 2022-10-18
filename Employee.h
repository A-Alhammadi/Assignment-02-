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
	virtual double calcSalary(double hours);
	virtual int vacationDays(double hours);
	virtual double healthCare(double hours);
	virtual void setSal(int s);
	virtual void setVac(int v);
	virtual void setIns(int i);

private:
	double sal;
	int vac;
	int ins;
};

class Professional : public Employee
{

public:
	double calcSalary(double m);
	int vacationDays(int d);
	double healthCare(double h);
	void setSal(double s);
	
	void setVac(int v);
	
	void setIns(double i);
	
private:
	double monthSal;
	int vacation;
	double insurance;
};

class Nonprofessional : public Employee
{
	double calcSalary(double hours);
	int vacationDays(double hours);
	double healthCare(double hours);
	void setSal(int s);
	void setVac(int v);
	void setIns(double i);
	
private:
	double weekSal;
	int vacation;
	double insurance;
};


#endif










