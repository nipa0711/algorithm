/*
https://www.acmicpc.net/problem/10453
의 문제 풀이.

한계점은 a,b 라는 두개의 소문자 알파벳이라는 조건아래에 성립합니다.
또한, 다른 테스트 케이스들은..
음...
어떤식으로 테스트 해야 될지 모르겠네요.

main함수등을 만들고 거기서 string 두 개를 인자로 넘겨주면서 solution을 호출하면 됩니다.

*/

#include <iostream>
#include <string>

using namespace std;

int solution(string A, string B)
{
	if (A.size() != B.size()) // A,B 문자열의 길이가 다르다면
	{
		return -1;
	}
	else if (A.compare(B) == 0) // A,B 문자열이 일치한다면
	{
		return 0;
	}
	else
	{
		int aCount = 0;
		int bCount = 0;
		int size = A.size();
		int *locationA = new int[size]; // 동적배열
		int *locationB = new int[size];

		for (int i = 0; i < size; i++)
		{
			if (A[i] == 'a') // A문자열을 하나씩 봤을때 a문자가 있다면
			{
				locationA[aCount] = i;
				aCount++;
			}

			if (B[i] == 'a') // B문자열을 하나씩 봤을때 a문자가 있다면
			{
				locationB[bCount] = i;
				bCount++;
			}
		}

		if (aCount != bCount) // A, B 문자열의 a,b 갯수는 일치해야 된다. 일치하지 않으면 -1
		{
			return -1;
		}

		int sum = 0;

		for (int i = 0; i < size / 2; i++) // 결국 a라는 문자는 입력된 문자열 길이에 절반이 존재한다.
		{
			sum = sum + abs(locationA[i] - locationB[i]); // abs는 절대값 연산
		}

		return sum;
	}
}