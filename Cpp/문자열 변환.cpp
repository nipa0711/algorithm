/*
https://www.acmicpc.net/problem/10453
�� ���� Ǯ��.

�Ѱ����� a,b ��� �ΰ��� �ҹ��� ���ĺ��̶�� ���ǾƷ��� �����մϴ�.
����, �ٸ� �׽�Ʈ ���̽�����..
��...
������� �׽�Ʈ �ؾ� ���� �𸣰ڳ׿�.

main�Լ����� ����� �ű⼭ string �� ���� ���ڷ� �Ѱ��ָ鼭 solution�� ȣ���ϸ� �˴ϴ�.

*/

#include <iostream>
#include <string>

using namespace std;

int solution(string A, string B)
{
	if (A.size() != B.size()) // A,B ���ڿ��� ���̰� �ٸ��ٸ�
	{
		return -1;
	}
	else if (A.compare(B) == 0) // A,B ���ڿ��� ��ġ�Ѵٸ�
	{
		return 0;
	}
	else
	{
		int aCount = 0;
		int bCount = 0;
		int size = A.size();
		int *locationA = new int[size]; // �����迭
		int *locationB = new int[size];

		for (int i = 0; i < size; i++)
		{
			if (A[i] == 'a') // A���ڿ��� �ϳ��� ������ a���ڰ� �ִٸ�
			{
				locationA[aCount] = i;
				aCount++;
			}

			if (B[i] == 'a') // B���ڿ��� �ϳ��� ������ a���ڰ� �ִٸ�
			{
				locationB[bCount] = i;
				bCount++;
			}
		}

		if (aCount != bCount) // A, B ���ڿ��� a,b ������ ��ġ�ؾ� �ȴ�. ��ġ���� ������ -1
		{
			return -1;
		}

		int sum = 0;

		for (int i = 0; i < size / 2; i++) // �ᱹ a��� ���ڴ� �Էµ� ���ڿ� ���̿� ������ �����Ѵ�.
		{
			sum = sum + abs(locationA[i] - locationB[i]); // abs�� ���밪 ����
		}

		return sum;
	}
}