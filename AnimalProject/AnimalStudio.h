#pragma once
#include "animal.h"
#include "dog.h"
#include "cat.h"
class AnimalStudio
{
public:
	void justDoIT(animal** animals, int size) {
		for (int i = 0; i < size; i++)
		{
			animals[i]->getVoice();

		}

	}

};
