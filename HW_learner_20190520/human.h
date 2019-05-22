#pragma once
#include<iostream>
#include<string>

using namespace std;

class human
{
	string name;
	int age;
public:
	human(string name, int age){
		this->name = name;
		this->age = age;
	}
	void setName(string name) { this->name = name; }
	string getName()const { return this->name; }

	void setAge(int age) { this->age = age; }
	int getAge()const {return this->age;}

	virtual void info() const {
		cout << "\n Name:\t" << name << "\n Age:\t" << age;
	}
};
