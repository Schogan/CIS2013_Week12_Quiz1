#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

class house_info{
	public:
		string color;
		int year = 2018;
		int car_ports = 2;
		int windows = 10;
		int doors = 2;
		int value = 0;
		
		int calculate(){
		
			int nvalue = 0;
			int windows = 0;
			int nyear = 0;
			int car_ports = 0;
			int doors = 0;
			int year_value = 0;
			
			car_ports = car_ports * 1000;
			windows = car_ports * 500;
			doors = doors * 2500;
			nyear = year;
			if(nyear < 2000){
				year_value = (2000 - nyear)*-5000;
			}
			if(nyear >= 2000){
				year_value = (nyear - 2000)*5000;
			}
			
			value = windows + year_value + car_ports + doors;
			
		}


	void print(){
		
		
			cout << "----------------------------------------------" << endl;
			cout << "Your house's information is:"<<endl;
			cout << "Color: " << color <<endl;
			cout << "Year: " << year <<endl;
			cout << "Car Ports: " << car_ports <<endl;
			cout << "Windows: " << windows <<endl;
			cout << "Doors: " << doors <<endl;
			cout << "----------------------------------------------" << endl;
			
			calculate();
			
			cout << "Your house's estimated value is: $"<< value <<endl;
			cout << endl;
			cout << endl;
	}		

};


int main(){
	bool program_running = true;
	
	house_info your_house;
	
	cout << "Please enter the following information for your house:"<<endl;
	cout << "Color: ";
	cin >> your_house.color;
	cout << "Year: ";
	cin >> your_house.year;
	cout << "Number of Car Ports: ";
	cin >> your_house.car_ports;
	cout << "Number of Windows: ";
	cin >> your_house.windows;
	cout << "Number of doors: ";
	cin >> your_house.doors;
	your_house.print();
}

