/*
Fridge Module maintains fridge ,
figuratively it works as driver of device(fridge)
2021 Michael Shishov
email:fandim16k@gmail.com
*/

#include <thread>
#include <iostream>
#include <string>
#include <fstream>
#pragma  "Module_class.h";

#ifndef Fridge_module_HEADER
#define Fridge_module_HEADER

class Fridge_module : public Module 
{

public:

	/* constructor of the class */
	Fridge_module(string name_for_obj)  {
		name = name_for_obj;
	}
	/*module annonces about his work in write his status in global file "list_modules" down.
	And this function must know what object it works with.
	*/
	int annonce_about_start(Fridge_module obj)  {
		cout << "Module:\t" << obj.name << endl;
		// initialzie object to work with file of active_modules
		ofstream fridge_module;
		fridge_module.open("active_modules.txt");
		// Writing the object's data in file
		fridge_module.write((char*)&obj, sizeof(obj));
		//close a file
		fridge_module.close();

		return 0;
	}

};

#endif