// Chapter5.cpp : �������̨Ӧ�ó������ڵ㡣
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

