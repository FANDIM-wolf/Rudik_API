/*
Thermometer Module maintains thermometer ,
figuratively it works as driver of device(thermometer)
2021 Michael Shishov
email:fandim16k@gmail.com
*/

#include <thread>
#include <iostream>
#include <string>
#include <fstream>
#include "Module_class.cpp";

class Thermometer_module : public Module {
	
public:
	/* constructor of the class */
	 Thermometer_module(string name_for_obj) {
		 
		 name = name_for_obj;
	}
	/*module annonces about his work in write his status in global file "list_modules" down.
	And this function must know what object it works with.
	*/
	int annonce_about_start(Thermometer_module obj) {
		cout << "Object" << obj.name << "starts work" << endl;
		// initialzie object to work with file of active_modules
		ofstream thermometer_file;
		thermometer_file.open("active_modules.txt");
		thermometer_file << obj.name;
		thermometer_file.close();
		 
		return 0;
	}
	


};