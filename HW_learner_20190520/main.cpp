#pragma once
#include"schoolkid.h"
#include"student.h"
#include"learnersArr.h"
#include<vector>


void main() {
	learnersArr l("ItStep");  // (string name, int age, int academicPerformance, int stage)
	l.addLearner(new schoolkid("Vasilii", 10, 12, 1));
	l.addLearner(new schoolkid("Masha", 10, 10, 1));
	l.addLearner(new schoolkid("Petya", 11, 9, 1));

	l.addLearner(new student("Dasha", 10, 12, 3));
	l.addLearner(new student("Ivan", 10, 12, 3));
	l.addLearner(new student("Oleg", 10, 12, 3));
	l.addLearner(new student("Anton",20,12,1));

	//l.info("student");

	l.info("schoolkid");

	cout << endl;
	system("pause");
}

