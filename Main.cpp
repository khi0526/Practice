#include <iostream>

class Calculator
{
	//1000 자리의 수들의 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 만들어보세요.
	//나눗셈의 경우 소수 부분을잘라버리세요. 물론, 소수 부도 1000 자리로 구현해도 됩니다.
	//1000 자리 수들의 연산 수행 시간은 1 초 미만이여야합니다.
public:
	int Main()
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

	int plus(char* a, char* b, char* result, char aLen, char bLen)
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

	int minus(char *a, char *b)
	{
	
	}
	
	int multi(char *a, char *b)
	{
	
	}
	
	int divide(char *a, char *b)
	{
	
	}
};
class ChangeNotation
{
public:
	//int main()
	//{
	//	int in, out, inDecimal, outDecimal;

	//	std::cout << "입력할 진법을 선택하세요 : ";

	//	return 0;
	//}
};
class PassFail
{
public:
	//사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 평균이 가장 높은 사람 부터
	//평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요.특히, 평균을 기준으로 평균 이상인 사람
	//옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요

	int main()
	{
		int score[5][3];
		int rank[5] = { 1, 2, 3, 4, 5 };
		int temp;

		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 3; j++)
				std::cin >> score[i][j];

		for (int i = 0; i < 5; i++)
			for (int j = i + 1; j < 5; j++)
				if (avg(score, i) < avg(score, j))
				{
					change(score, i, j);
					temp = rank[i];
					rank[i] = rank[j];
					rank[j] = temp;
				}

		for (int i = 0; i < 5; i++)
			temp += avg(score, i);
		temp /= 5;

		for (int i = 0; i < 5; i++)
		{
			std::cout << rank[i];
			avg(score, i) < temp ? std::cout << " 불합격" << std::endl : std::cout << " 합격" << std::endl;
		}

		return 0;
	}

	int avg(int score[][3], int row)
	{
		int _avg = 0;
		for (int i = 0; i < 3; i++)
			_avg += score[row][i];

		return _avg / 3;
	}

	void change(int(*score)[3], int a, int b)
	{
		int temp;

		for (int i = 0; i < 3; i++)
		{
			temp = score[a][i];
			score[a][i] = score[b][i];
			score[b][i] = temp;
		}
	}
};

int main()
{
	//Calculator Calculator;
	//Calculator.Main();

	return 0;
}