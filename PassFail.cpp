#include "PassFail.h"
#include <iostream>

// 사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 평균이 가장 높은 사람 부터
// 평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요.특히, 평균을 기준으로 평균 이상인 사람
// 옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요

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
		Avg(score, i) < temp ? std::cout << " 불합격" << std::endl : std::cout << " 합격" << std::endl;
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