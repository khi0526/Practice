#pragma once

class Calculator
{
//1000 �ڸ��� ������ ����, ����, ����, �������� �����ϴ� ���α׷��� ��������.
//�������� ��� �Ҽ� �κ����߶��������. ����, �Ҽ� �ε� 1000 �ڸ��� �����ص� �˴ϴ�.
//1000 �ڸ� ������ ���� ���� �ð��� 1 �� �̸��̿����մϴ�.
public:
	int Main();

	int Plus(char* a, char* b, char* result, int aLen, int bLen);
	int Minus();
	int Multi();
	int Divide();
};
