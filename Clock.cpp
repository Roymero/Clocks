#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"
using namespace std;


// variables
int hours = 0;
int minutes = 0;
int seconds = 0;
int Years;
string ampm = "AMPM";
bool runProgram = true;

//defining functions


// initializing clock time
void createClock::init(int h, int m, int s, string AMPM) {
	hours = h;
	minutes = m;
	seconds = s;
	ampm = AMPM; 
}
void createClock::menu() {        // Displaying Menu
	cout << "\n\n                        System Menu" << endl;
	cout << "              *******************************" << endl;
	cout << "              *                             *" << endl;
	cout << "              *" << "      1)  Add 1 Second       *" << endl;
	cout << "              *                             *" << endl;
	cout << "              *" << "      2)  Add 1 Minute       *" << endl;
	cout << "              *                             *" << endl;
	cout << "              *" << "      3)  Add 1 Hour         *" << endl;
	cout << "              *                             *" << endl;
	cout << "              *" << "      4)  Exit Program       *" << endl;
	cout << "              *                             *" << endl;
	cout << "              *******************************";
}


void createClock::displayTime(int hours, int minutes, int seconds, string ampm) { // Displaying Current Time
	
	// If statement to calculate AM/PM and the conversion from 24 hours to 12 hours.

	int hours12;

	if (hours > 12) {
		ampm = "PM";
		hours12 = hours - 12;
	}
	else if (hours == 12) {
		ampm = "PM";
		hours12 = 12;
	}
	else if (hours == 0) {
		ampm = "AM";
		hours12 = 12;
	}
	else {
		ampm = "AM";
		hours12 = hours;
	}

	cout << "         12 Hour Clock" << "               24 Hour Clock" << endl;
	cout << "     *********************" << "       *********************" << endl;
	std::cout << "     *    " << std::setfill('0') << std::setw(2) << hours12 << ":"
		<< std::setfill('0') << std::setw(2) << minutes << ":"
		<< std::setfill('0') << std::setw(2) << seconds << " " << ampm <<"    *       " << "*     "
		<< std::setfill('0') << std::setw(2) << hours << ":"
		<< std::setfill('0') << std::setw(2) << minutes << ":"
		<< std::setfill('0') << std::setw(2) << seconds << "      *" << endl;
	cout << "     *********************" << "       *********************" << endl;
	cout << "\n                Press esc key to display menu";
}

