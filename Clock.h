#pragma once
#ifndef CLOCK_H
#define CLOCK_H

#include <string>
#include <iostream>
using namespace std;


class createClock
{
public:
	int input;
	void init(int hours, int minutes, int seconds, string AMPM);
	void menu();
	void displayTime(int hour, int minute, int second, string AMPM);


private:
	// declaring variables
	int hours;
	int minutes;
	int seconds;
	string AMPM;






};

#endif 