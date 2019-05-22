#pragma once
#include"learner.h"

class student :public learner
{
	int ñourse;
public:
	student(string name, int age, int academicPerformance, int ñourse)
		: learner(name, age, academicPerformance) {
		this->ñourse = ñourse;
	}
	void setCourse(int ñourse) { this->ñourse = ñourse; }
	int getCourse() const { return this->ñourse; }

	void info() const override {
		learner::info();
		cout << "\n Course:\t" << ñourse;
	}

};
