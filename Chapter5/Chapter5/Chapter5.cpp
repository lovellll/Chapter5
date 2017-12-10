// Chapter5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>









int main()
{
	int count(1);
	
	while (count <= 5)
	{
		int inner(1);
		while (inner <= (5 - count))
		{
			std::cout << ' ';
			std::cout << ' ';
			++inner;
		}
		int tempCount(count);
		while (tempCount >= 1)
		{
			std::cout << tempCount;
			std::cout << ' ';
			--tempCount;
		}
		std::cout << '\n';
		++count;
	}

    return 0;
}

