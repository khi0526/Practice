#pragma once

class PassFail
{
public:
	int Main();

	int Avg(int score[][3], int row);
	void Change(int(*score)[3], int a, int b);
};