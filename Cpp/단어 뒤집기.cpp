/*
�ܾ� ������

�� ���ڿ��� ����ִ� �ܾ��� ������ ������ �Լ��� �ۼ��϶�.
input : Do or do not, there is no try.
output : try. no is there not, do or Do
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solve(string input)
{
	string buf; // ���� string
	stringstream ss(input); // input�� stream�� �ִ´�

	vector<string> str; // word���� ���� vector

	while (ss >> buf)
	{
		str.push_back(buf); // vector�� �ܾ �ִ´�.
	}
	string result;

	for (int i = 0; i < str.size(); ++i)
	{
		result = result + str.at(str.size() - 1 - i) + " "; // vector�� ����ִ� �͵��� �������� ������ ��ģ��.
	}

	return result;
}

int main()
{
	string input;
	getline(cin, input);
	cout << solve(input) << endl;
}