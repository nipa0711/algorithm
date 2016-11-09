/*
단어 뒤집기

한 문자열에 들어있는 단어의 순서를 뒤집는 함수를 작성하라.
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
	string buf; // 버퍼 string
	stringstream ss(input); // input을 stream에 넣는다

	vector<string> str; // word들을 넣을 vector

	while (ss >> buf)
	{
		str.push_back(buf); // vector에 단어를 넣는다.
	}
	string result;

	for (int i = 0; i < str.size(); ++i)
	{
		result = result + str.at(str.size() - 1 - i) + " "; // vector에 들어있는 것들을 역순으로 꺼내서 합친다.
	}

	return result;
}

int main()
{
	string input;
	getline(cin, input);
	cout << solve(input) << endl;
}