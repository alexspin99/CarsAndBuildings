#include<iostream>
using namespace std;

class Car {
private:
	string brand; // ex “BMW”
	int year;
public:
	//constructors
	Car() { brand = "Honda"; year = 1993; } // assign some default values for brand and year.
	Car(string s, int i) { brand = s; year = i; }
	
	//accessors
	string getBrand() { return brand; }
	int getyear() { return year; }
	
	//mutators
	void setBrand(string s) { brand = s; }
	void setYear(int i) { year = i; }
};

class Building {
private:
	string address; // ex “Park Ave”
	int No_floors;
	double area;
	int * ptr;

public:
	//constructors
	Building() { address = "Park Ave"; No_floors = 6; area = 258.3; ptr = new int[3]; } // assign values for address, No_floors, and area.
	Building(string s, int i, double d) { address = s; No_floors = i; area = d; }
	Building(string s, int i) { address = s;  No_floors = i; area = 673.9; }
	Building(double d, string s, int i) { area = d; No_floors = i; address = s; }
	Building(double d) { area = d; No_floors = 3; address = "Broadway"; }
	
	//accessors
	string getaddress() { return address; }
	int getfloors() { return No_floors; }
	double getarea() { return area;}

	//mutators
	void setaddress(string s) { address = s; }
	void setfloors(int i) { No_floors = i; }
	void setarea(double d) { area = d; }

	//destructor
	~Building() { delete ptr;  ptr = nullptr; }

	friend class City;
	friend Building getBuildingArea(Building*);
};

class City {
	string name;
public:
	City(string s) { name = s; }
	void getAddress(Building & b) { 
		cout << b.getaddress(); }
};

Building getBuildingArea(Building * ptr) {
	Building build(ptr->getarea());
	return build;
}


