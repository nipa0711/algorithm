/*
하나의 결과를 도출해내는데는, 무수한 방법이 있다.
간단하게 생각나는 두가지 방법으로 소수를 구해보았다.
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

	for (int i = 0; i < input; ++i) // 일단 배열에 모든 숫자를 다 쑤셔넣고
	{
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(input); ++i) // 루트input 까지만 나눠보면 된다.
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
