/*
�ݺ����� �ʴ� ù ��° ���� ã��

�Ѱ��� : �ܾ���ؿ��� �۵��ϸ�, �����̳� ���� �� Ư�����ڵ���� �ִ� ���̶�� �߰������ �� �͵��� �ִ�.
�������� ����� ���..
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

char solve(string input)
{
	int strCount[26] = { 0, }; // ���ĺ�����. �ᱹ �Ҵ빮�� �����̳� ���ڵ� �ٸ� �͵��� ������ �ȵȴ�.

	list<char> saveLetter;
	list<char>::iterator itor;

	for (int i = 0; i < input.length(); ++i) // ���ڿ� ��ü Ž��
	{
		char c = input.at(i);
		int temp = (int)c - 97;

		++strCount[temp];

		if (strCount[temp] == 1)
		{
			saveLetter.push_back(c); // list�� ����
		}
		else if (strCount[temp] == 2)
		{
			itor = find(saveLetter.begin(), saveLetter.end(), c); // 2�� �̻�� �ش� �� ã�Ƽ� ����
			saveLetter.erase(itor);
		}
	}

	return saveLetter.front(); // �ᱹ ���� ���� ���� �ݺ����� �ʴ� ù��° ����
}

int main()
{
	string input;
	cin >> input;
	cout << solve(input) << endl;
}