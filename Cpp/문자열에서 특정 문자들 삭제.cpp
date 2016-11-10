/*
문자열에서 특정 문자들 삭제

string에서 특정 character를 제외하고 재구성하는 function
input : Do or do not, there is no try.
제외 문자 : e o
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

	for (int i = 0; i < input.length(); ++i) // input 전체 탐색
	{
		char c = input.at(i);

		bool flag = true;
		for (int j = 0; j < chk.size(); ++j) // 제외 문자들 탐색
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
	cout << "문자열 입력 : ";
	getline(cin, input);
	cout << "제외 문자들 입력 : ";
	getline(cin, except);

	cout << solve(input, except) << endl;
}