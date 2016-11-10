/*
���ڿ����� Ư�� ���ڵ� ����

string���� Ư�� character�� �����ϰ� �籸���ϴ� function
input : Do or do not, there is no try.
���� ���� : e o
output : D r d nt, thr is n try.
*/

#include <iostream>
#include <string>
#include <list>
#include <sstream>
#include <vector>

using namespace std;

string solve(string input, string except)
{
	string result;
	vector<char> chk;

	char buf;
	stringstream ss(except);

	while (ss >> buf)
	{
		chk.push_back(buf);
	}

	for (int i = 0; i < input.length(); ++i) // input ��ü Ž��
	{
		char c = input.at(i);

		bool flag = true;
		for (int j = 0; j < chk.size(); ++j) // ���� ���ڵ� Ž��
		{
			if (chk[j] == c)
			{
				flag = false;
			}
		}

		if (flag == true)
		{
			result += c;
		}
	}

	return result;
}

int main()
{
	string input, except;
	cout << "���ڿ� �Է� : ";
	getline(cin, input);
	cout << "���� ���ڵ� �Է� : ";
	getline(cin, except);

	cout << solve(input, except) << endl;
}