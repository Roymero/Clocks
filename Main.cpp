// Roy Romero
// CS-210
//Project 1


#include "Clock.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;






int main() { //main variables
	
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	string ampm = "AM";
	bool runProgram = true;
	int userInput;
	createClock clock1;


	// main loop
	while (runProgram == true) {
		system("CLS");
		clock1.init(hours, minutes, seconds, ampm);
		clock1.displayTime(hours, minutes, seconds, ampm);
		
		

		seconds += 1;
		
		
		if (seconds == 60) {
			minutes += 1;
			seconds = 0;
		}

		if (minutes == 60) {
			hours += 1;
			minutes = 0;
		}

		if  (hours == 24) {
			hours = 0;
		
		}
		
		// If user presses esc key then program will pause and menu will pop up.
		// Then user will press input.
		
		if (GetAsyncKeyState(VK_ESCAPE)) {
			
			clock1.menu();
			cout << "\n\n  User Input: ";
			cin >> userInput;
			if (userInput == 1) {
				seconds += 1;
			}
			else if (userInput == 2) {
				minutes += 1;
			}
			else if (userInput == 3) {
				hours += 1;
			}
			else if (userInput == 4) {
				runProgram = false;
			}
			system("pause");
		}
		
		
		Sleep(1000);

		

	}

	
	return 0;
}

