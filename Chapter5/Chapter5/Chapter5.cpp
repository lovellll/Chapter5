// Chapter5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int caculate(int x, int y, char operations)
{
	switch (operations)
	{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		case '%':
			return x % y;

	}
}




int main()
{
	int x;
	std::cout << "please input the first one number\n";
	std::cin >> x;

	char oprations;
	std::cout << "please input the oprations\n";
	std::cin >> oprations;

	int y;
	std::cout << "please input the second one number\n";
	std::cin >> y;

	std::cout << "your answer is " << caculate(x, y, oprations) << '\n';



    return 0;
}

