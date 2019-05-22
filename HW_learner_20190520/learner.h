#pragma once
#include"human.h"

class learner:public human {

	int academicPerformance;
public:
	learner(string name, int age, int academicPerformance)
		:human(name, age) {
		this->academicPerformance = academicPerformance;
	}
	void setAcademPerf() { this->academicPerformance = academicPerformance; }
	int getAcademOerf() const { return this->academicPerformance; }

	void info() const override {
		human::info();
		cout << "\n Performance:\t" << academicPerformance;
	}
};
