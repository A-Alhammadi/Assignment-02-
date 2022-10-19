#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cmath>
#include "Header.h"

using namespace std;


 double Employee::calcSalary(double hours) {//this and the rest of the Employee functions are virtual and won't actually be used. 
	                                        //These are only the default versions of the abstract class
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
	

	double Professional::calcSalary(double m) { //Since for the professional employee, there weren't really instructions on what the functions should do, 
		                                        //I have only pretty much "setter " and "getter" functions. The user will be asked to input the values and they will be saved as Private variables
		const double monthlySalary = m; 
		return monthlySalary;
	}
	int Professional::vacationDays(int d) {
		const int paidVacation = d; 
		return paidVacation;
	}
	double Professional::healthCare(double h) {
		const double healthInsurance = h; 
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
		const double rate = 18;              //18$ per hour
		double weeklySalary = hours * rate;  //weekly hours will be asked for and inputed and weekly salary calculated
		cout << endl << " The weekly salary for this employee is: " << weeklySalary << endl;
		return weeklySalary;
	}

	int Nonprofessional::vacationDays(double hours)
	{
		const double days = 0.006667;                        //multiplied by the hours worked, this would be 1 day per 150 hours worked
		int paidVacation = round((days * hours) * 52);       //number of days of paid vacation is calculated by multiplying the above decimal by the hours times 52 for the yearly vacation days
		cout << endl << " The number of paid vaction days for this employee per year will be: " << paidVacation << endl;
		return paidVacation;
	}

	double Nonprofessional::healthCare(double hours)
	{
		const double standardIns = 400; //400$ per month for standard insurance
		const double higherIns = 600;   //600$ per month for the higher insurance
		double insurance;
		//whether a certain employee receives the standard insurance,higher insurance, or no insurance depends on how many hours they work per week.
		if (hours >= 48) 
			insurance = higherIns;//if the employee works 48 or more hours per week they receive the higher insurance
		else if (hours >= 30)//if they work 30 or more hours per week, they receive the standard insurance
			insurance = standardIns;
		else
			insurance = 0;//if they work fewer than 30 hours a week, they do not receive any health insurance
		cout << endl << " The monthly health insurance for this employee will be: " << insurance << endl;
		return insurance;
	}
	//the following are the "setter" functions for the private variables
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


