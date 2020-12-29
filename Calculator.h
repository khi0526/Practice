#pragma once

class Calculator
{
//1000 자리의 수들의 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 만들어보세요.
//나눗셈의 경우 소수 부분을잘라버리세요. 물론, 소수 부도 1000 자리로 구현해도 됩니다.
//1000 자리 수들의 연산 수행 시간은 1 초 미만이여야합니다.
public:
	int Main();

	int Plus(char* a, char* b, char* result, int aLen, int bLen);
	int Minus();
	int Multi();
	int Divide();
};
