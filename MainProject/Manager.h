#pragma once
#include "Worker.h"

// function class
class Manager : public Worker
{
public:
	Manager() {
		cout << "Manager default constructor." << endl;
	}

	~Manager() {
		cout << "Manager destructor." << endl;
	}

	//Group findBestStudents(Group group);
	//Group findWorstStudents(Group group);
};
