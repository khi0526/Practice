#include "Calculator.h"
#include <iostream>

int Calculator::Main()
{
	char a[1000], b[1000], result[2000], op;

	for (int i = 0; i < 1000; i++)
	{
		a[i] = -1;
		b[i] = -1;
		result[i] = -1;
	}

	std::cout << "첫 번째 수를 입력하세요 : ";
	std::cin >> a;
	std::cout << "두 번째 수를 입력하세요 : ";
	std::cin >> b;
	std::cout << "연산자를 입력하세요(1.+ 2.- 3.* 4./) : ";
	std::cin >> op;

	//switch (op)
	//{
	//case 1:
	//	std::cout << "결과 : ";
	//	plus(a, b);
	//	break;
	//case 2:
	//	std::cout << "결과 : " << minus(a, b) << std::endl;
	//	break;
	//case 3:
	//	std::cout << "결과 : " << multi(a, b) << std::endl;
	//	break;
	//case 4:
	//	std::cout << "결과 : " << divide(a, b) << std::endl;
	//}

	return 0;
}

int Calculator::Plus(char* a, char* b, char* result, int aLen, int bLen)
{
	int rLen = 999;
	while (1)
	{
		if (aLen == 0 || bLen == 0)
			break;

		if (a[aLen] + b[bLen] > 9)
			a[aLen - 1]++;
		result[rLen] = a[aLen] + b[bLen] % 10;
		aLen--;
		bLen--;
		rLen--;
	}


	return 0;
}

int Calculator::Minus()
{
	return 0;
}

int Calculator::Multi()
{
	return 0;
}

int Calculator::Divide()
{
	return 0;
}