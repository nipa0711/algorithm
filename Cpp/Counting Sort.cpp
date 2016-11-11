/*
카운팅 정렬은 보통 양의 정수일 때 사용한다.
*/

#include <iostream>

using namespace std;

void countingSort(int* arr, int arrSize)
{
	// 배열 최대값
	int max = arr[0];

	for (int i = 0; i < arrSize; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	int countSize = max + 1;
	int* count = new int[countSize];

	memset(count, 0, countSize);

	for (int i = 0; i < arrSize; i++)
	{
		count[arr[i]]++;
	}

	int index = 0;
	for (int i = 0; i < countSize; ++i)
	{
		while (count[i]--)
		{
			arr[index++] = i;
		}
	}
}