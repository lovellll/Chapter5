#include "stdafx.h"
#include "animal.h"
#include <iostream>
#include <string>




std::string getAnimalName(Animal animal)
{
	switch (animal.name)
	{
	case AnimalName::PIG:
		return "pig";
	case  AnimalName::CHICKEN:
		return "chicken";
	case  AnimalName::GOAT:
		return "goat";
	case  AnimalName::CAT:
		return "cat";
	case  AnimalName::DOG:
		return "dog";
	case  AnimalName::OSTRICH:
		return "ostrich";
	default:
		return "wrong type";
	}
}


void printNumberOfLegs(Animal animal)
{
	std::cout << getAnimalName(animal) << " has " << animal.legs << " legs\n";
}