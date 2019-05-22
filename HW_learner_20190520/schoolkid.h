#pragma once
#include"learner.h"

class schoolkid :public learner
{
	int stage;
public:
	schoolkid(string name, int age, int academicPerformance, int stage)
		: learner(name, age, academicPerformance) {
		this->stage = stage;
	}
	void setStage(int stage) { this->stage = stage; }
	int getStage() const { return this->stage; }

	void info() const override {
		learner::info();
		cout << "\n Stage:\t" << stage;
	}

};