// Chapter5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "animal.h"


Animal pig{ AnimalName::PIG,4 };
Animal chicken{ AnimalName::CHICKEN,2 };
Animal goat{ AnimalName::GOAT,4 };
Animal cat{ AnimalName::CAT,4 };
Animal dog{ AnimalName::DOG,4 };
Animal ostrich{ AnimalName::OSTRICH,2 };





int main()
{
	printNumberOfLegs(pig);
	printNumberOfLegs(chicken);
	printNumberOfLegs(cat);

    return 0;
}

