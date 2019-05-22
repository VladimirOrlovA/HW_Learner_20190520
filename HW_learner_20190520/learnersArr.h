#pragma once
#include"schoolkid.h"
#include"student.h"
#include<vector>

class learnersArr
{
	vector<learner*> learn;
	string learners;

public:
	learnersArr(string learners) {
		this->learners = learners;
	}
	void setLearners(string learners) { this->learners = learners; }
	string getLearners() const { return this->learners; }

	void info(string str) {
		cout << "Learners " << learners;
		for (learner*l : learn) {
			if (str == string(typeid(*l).name()).substr(6))
			{
				cout << "\n----------------------\n";
				cout << "position: " << string(typeid(*l).name()).substr(6) << endl;
				l->info();
			}
		}
	}

	void addLearner(learner*l) {
		learn.push_back(l);
	}

	void removeLearner(int index) {
		int count = 0;
		for (learner*l : learn) {
			if (count == index) {
				delete l;
				break;
			}
			count++;
		}
		learn.erase(learn.cbegin() + count);
	}

	learnersArr(const learnersArr&) = delete;
	learnersArr& operator=(const learnersArr&) = delete;

	~learnersArr() {
		for (learner*l : learn) {
			delete l;
		}
	}
};