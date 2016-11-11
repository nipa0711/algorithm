/*
ī���� ������ ���� ���� ������ �� ����Ѵ�.
*/

#include <iostream>

using namespace std;

void countingSort(int* arr, int arrSize)
{
	// �迭 �ִ밪
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