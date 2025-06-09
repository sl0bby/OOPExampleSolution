#pragma once
#include "animal.h"
class dog : public animal
{
public:
	dog(string name) : animal(name) {};

	void getVoice() override {
		cout << "Gauuuuuu... gauuuuuu... gauuuuuuuuu..." << endl;
	}
};
