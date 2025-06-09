#pragma once
#include "main.h"
class animal
{
public:
	static int count = 0;
	string name;

	animal() {
		count++;
	}

	animal(string name) : name(name) {
		count++;
	}

	~animal() {
		count--;
	}
	
	static int getCount() {
		return count;
	}

	//overriding
	virtual void getVoice() {
		cout << "..." << endl;
	}

};