#pragma once
#include "animal.h"
class cat : public animal
{
public:
	string name;


	cat(string name) : animal(name) {}

	void getVoice() override {
		cout << "Meow... meow... meow..." << endl;
	}
};
