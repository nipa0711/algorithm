/*
피보나치 단순 출력
*/

#include <iostream>

using namespace std;

void fibo(int n)
{
	unsigned int val1 = 0;
	unsigned int val2 = 1;
	unsigned int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum = val1 + val2;
		cout << sum << " ";
		val1 = val2;
		val2 = sum;
	}
}

int main()
{
	int input;
	cin >> input;
	fibo(input);
}
