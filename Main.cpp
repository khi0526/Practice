#include <iostream>

class Calculator
{
	//1000 �ڸ��� ������ ����, ����, ����, �������� �����ϴ� ���α׷��� ��������.
	//�������� ��� �Ҽ� �κ����߶��������. ����, �Ҽ� �ε� 1000 �ڸ��� �����ص� �˴ϴ�.
	//1000 �ڸ� ������ ���� ���� �ð��� 1 �� �̸��̿����մϴ�.
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

		std::cout << "ù ��° ���� �Է��ϼ��� : ";
		std::cin >> a;
		std::cout << "�� ��° ���� �Է��ϼ��� : ";
		std::cin >> b;
		std::cout << "�����ڸ� �Է��ϼ���(1.+ 2.- 3.* 4./) : ";
		std::cin >> op;

		//switch (op)
		//{
		//case 1:
		//	std::cout << "��� : ";
		//	plus(a, b);
		//	break;
		//case 2:
		//	std::cout << "��� : " << minus(a, b) << std::endl;
		//	break;
		//case 3:
		//	std::cout << "��� : " << multi(a, b) << std::endl;
		//	break;
		//case 4:
		//	std::cout << "��� : " << divide(a, b) << std::endl;
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

	//	std::cout << "�Է��� ������ �����ϼ��� : ";

	//	return 0;
	//}
};
class PassFail
{
public:
	//����ڷ� ���� 5 ���� �л��� ����, ����, ���� ������ �Է� �޾Ƽ� ����� ���� ���� ��� ����
	//����� ���� ���� ������� ���ĵǾ� ����ϵ��� �ϼ���.Ư��, ����� �������� ��� �̻��� ���
	//������ '�հ�', �ƴ� ����� '���հ�' �� ����ϰ� �غ�����

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
			avg(score, i) < temp ? std::cout << " ���հ�" << std::endl : std::cout << " �հ�" << std::endl;
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