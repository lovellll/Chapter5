// Chapter5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>









int main()
{
	char count('a');
	while (count <= 'z')
	{
		std::cout << count << "_" << static_cast<int>(count) << ' ';
		if (count == 'z')
			std::cout << '\n';
		++count;
	}

    return 0;
}

