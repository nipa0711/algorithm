/*
�ϳ��� ����� �����س��µ���, ������ ����� �ִ�.
�����ϰ� �������� �ΰ��� ������� �Ҽ��� ���غ��Ҵ�.
*/

#include <iostream>

using namespace std;

void prime1(int input)
{
	for (int i = 1; i <= input; ++i)
	{
		bool prime = true;
		for (int j = 2; j <= i - 1; ++j)
		{
			if (i%j == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime == true)
		{
			cout << i << " ";
		}
	}
}

void prime2(int input)
{
	int *arr = new int[input];

	for (int i = 0; i < input; ++i) // �ϴ� �迭�� ��� ���ڸ� �� ���ųְ�
	{
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(input); ++i) // ��Ʈinput ������ �������� �ȴ�.
	{
		if (arr[i] == 0)
		{
			continue;
		}

		for (int j = i + i; j <= input; j += i)
		{
			arr[j] = 0;
		}
	}

	for (int i = 1; i <= input; ++i)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << " ";
		}
	}
}

int main()
{
	int input;
	cin >> input;
	prime1(input);
}
