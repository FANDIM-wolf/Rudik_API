#include <thread>
#include <iostream>
#include <string>
#include <fstream>

/*
	get all modules
*/

#include "modules/thermometer_module.cpp";

/*
Manager of proccess 
Get all information from modules 
*/
using namespace std;

// all microcontrollers who works now .
void get_status_of_microcontrollers()
{
	
}

// run process of thermometr work
void start_process_for_thermometer() {
	
	fstream thermomentr;
	
	thermomentr.open("devices/thermomenter.txt", ios::in); //open a file to perform read operation using file object
	if (thermomentr.is_open()) {   //checking whether the file is open
		string tp;
		getline(thermomentr, tp); //read data from file object and put it into string.
			
		Thermometer_module thermomenter(tp);
		thermomenter.annonce_about_start(thermomenter);

		thermomentr.close();
	}
	else {
		cout << "Unable to open!" << endl;
	}
	
}