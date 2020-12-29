#include "PassFail.h"
#include <iostream>

// ����ڷ� ���� 5 ���� �л��� ����, ����, ���� ������ �Է� �޾Ƽ� ����� ���� ���� ��� ����
// ����� ���� ���� ������� ���ĵǾ� ����ϵ��� �ϼ���.Ư��, ����� �������� ��� �̻��� ���
// ������ '�հ�', �ƴ� ����� '���հ�' �� ����ϰ� �غ�����

int PassFail::Main()
{
	int score[5][3];
	int rank[5] = { 1, 2, 3, 4, 5 };
	int temp;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 3; j++)
			std::cin >> score[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = i + 1; j < 5; j++)
			if (Avg(score, i) < Avg(score, j))
			{
				Change(score, i, j);
				temp = rank[i];
				rank[i] = rank[j];
				rank[j] = temp;
			}

	for (int i = 0; i < 5; i++)
		temp += Avg(score, i);
	temp /= 5;

	for (int i = 0; i < 5; i++)
	{
		std::cout << rank[i];
		Avg(score, i) < temp ? std::cout << " ���հ�" << std::endl : std::cout << " �հ�" << std::endl;
	}

	return 0;
}

int PassFail::Avg(int score[][3], int row)
{
	int _Avg = 0;
	for (int i = 0; i < 3; i++)
		_Avg += score[row][i];

	return _Avg / 3;
}

void PassFail::Change(int(*score)[3], int a, int b)
{
	int temp;

	for (int i = 0; i < 3; i++)
	{
		temp = score[a][i];
		score[a][i] = score[b][i];
		score[b][i] = temp;
	}
}