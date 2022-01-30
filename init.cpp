/* 
main file of controller of devices 

get external information from device 
and put it in Router RAM for further work.

*/

#include<iostream>
#include<string>
#include<fstream>

// in case when mistake apeared , return this variable
int call_back_mistake; 

bool initialization = false;
bool read_on = false ; 

void read_config(){
	read_on = true ;
}

//don't read config file 
void wait_on_config(){
	read_on = false ;
}

int main(){



ifstream fin;
fin.open("conig_router.txt");
string check_for_initialization;

if(!fin.is_open()){
  call_back_mistake = 1 ;
  return call_back_mistake;
}else{
  //get data about 
  while(!fin.eof()){
  	getline(fin ,check_for_initialization );
  	if (check_for_initialization == "true"){
  		//controller of devices must start to work 
  		initialization = true;
  	}
  }
}



fin.close();
return 0;

}