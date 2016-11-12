#include <iostream>

using namespace std;

void Common_Divisor(int num1, int num2)
{
	int bigNum = 0;

	if (num1 > num2)
	{
		bigNum = num1;
	}
	else
	{
		bigNum = num2;
	}

	for (int i = 1; i <= bigNum; ++i)
	{
		if ((num1%i == 0) && (num2%i == 0))
		{
			cout << i << " ";
		}

		if ((i == num1) || (i == num2))
		{
			break;
		}
	}
}

int main()
{
	int input1, input2;
	cin >> input1 >> input2;
	Common_Divisor(input1, input2);
}
