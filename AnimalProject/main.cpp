#include "AnimalStudio.h"
#include "cat.h"
#include "dog.h"
#include "crocodile.h"

int main() {
	AnimalStudio studio;
	animal animal("Animal");
	dog dog1("Pushok");
	cat cat1("Sharly");
	dog dog2("Laika");
	dog dog3("Sharik");
	Crocodile crocodile("Aligator");
	cat cat2("Adel");
	cat cat3("Masha");

	animal** animals;
	int size = 8;
	/*animals = new Animal * [size] {&dog1, & cat1, & animal, & dog2, & dog3,
		& cat2, & cat3, & crocodile};*/

	animals = new animal * [size] {new dog("Sharly"), new Cat("Adel"), new crocodile("Aligator")};



	studio.justDoIT(animals, size);

}