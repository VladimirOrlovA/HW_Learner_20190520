#pragma once
#include"learner.h"

class student :public learner
{
	int �ourse;
public:
	student(string name, int age, int academicPerformance, int �ourse)
		: learner(name, age, academicPerformance) {
		this->�ourse = �ourse;
	}
	void setCourse(int �ourse) { this->�ourse = �ourse; }
	int getCourse() const { return this->�ourse; }

	void info() const override {
		learner::info();
		cout << "\n Course:\t" << �ourse;
	}

};
