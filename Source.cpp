#include<iostream>
#include<string>
#include "Header.h"

using namespace std;

//Creates objects in the car class using self defined constructors, accesors and mutators

int main() {
	//declares two objects
	Car car1;
	Car car2("Taco", 5);
	
	//outputs brand and year of cars
	cout << car1.getBrand() << " " << car1.getyear() << endl;
	cout << car2.getBrand() << " " << car2.getyear() << endl;

	//modifys values of objects
	car1.setBrand("Chevy");
	car1.setYear(2016);
	car2.setBrand("Tesla");
	car2.setYear(2002);

	//outputs brand and year with modified values
	cout << car1.getBrand() << " " << car1.getyear() << endl;
	cout << car2.getBrand() << " " << car2.getyear() << endl;

	//creates 3rd car
	Car car3;
	Car * ptr = &car3;

	//outputs brand and year of car 3 
	cout << ptr->getBrand() << " " << ptr->getyear() << endl;
	



	return 0;
}





//Creates objects in the buildings class using constructors, accessors, mutators and destructor
//
//int main() {
//	//declares an array of 5 buildings using different constructors
//	Building buildings[5];
//	buildings[0] = Building();
//	buildings[1] = Building("Park Avenue", 6, 9.8);
//	buildings[2] = Building("Broadway", 8);
//	buildings[3] = Building(8.94, "Flatbush", 4);
//	buildings[4] = Building(11.95);
//
//	//Gets and sets the values of the data members
//	for (int i = 0; i < 5; i++) {
//		string address = buildings[i].getaddress();
//		int floors = buildings[i].getfloors();
//		double area = buildings[i].getarea();
//		buildings[i].setaddress(address);
//		buildings[i].setarea(area);
//		buildings[i].setfloors(floors);
//	}
//	
//	//creates city object, with the city class being a friend of the building class
//	City cit("Brooklyn");
//	Building build = Building("Flatbush", 3, 248.6);
//	cit.getAddress(build);
//	
//	return 0;
//}