#include <iostream>

using namespace std;

int Greatest_Common_Divisor(int num1, int num2)
{
	int result = 0;

	if (num1 == num2) // 둘 다 숫자가 같으면 최대 공약수는 자기자신이다.
	{
		return num1;
	}

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
			result = i;
		}

		if ((i == num1) || (i == num2))
		{
			break;
		}
	}

	return result;
}

int main()
{
	int input1, input2;
	cin >> input1 >> input2;
	cout << Greatest_Common_Divisor(input1, input2) << endl;
}
