#pragma once
#include "main.h"
class animal
{
public:
	string name;

	animal(string name) : name(name) {}

	//overriding
	void getVoice() override {
		cout << "..." << endl;
	}

};
