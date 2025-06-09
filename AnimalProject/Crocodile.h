#pragma once
#include "animal.h"
class Crocodile : public animal
{
public:
	Crocodile(string name) : animal(name) {}

	void getVoice() override {
		cout << "Nyam... nyam... nyam..." << endl;
	}
};
