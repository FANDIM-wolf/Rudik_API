
#include <thread>
#include <iostream>
#include <string>
#include "manager_of_modules.cpp";
using namespace std;



int main()
{   
    // start process of theremomenter
    thread Thread_for_thermomenter(start_process_for_thermometer);
    Thread_for_thermomenter.join();
       
}

