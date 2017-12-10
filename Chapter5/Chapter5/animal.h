#pragma once

#include <string>

enum class AnimalName
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};

struct Animal
{
	AnimalName name;
	int const legs;

};


std::string getAnimalName(Animal animal);
void printNumberOfLegs(Animal animal);