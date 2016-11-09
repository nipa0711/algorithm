/*
반복되지 않는 첫 번째 문자 찾기

한계점 : 단어수준에서 작동하며, 문장이나 숫자 및 특수문자들까지 있는 것이라면 추가해줘야 될 것들이 있다.
공백제거 라던지 등등..
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

char solve(string input)
{
	int strCount[26] = { 0, }; // 알파벳갯수. 결국 소대문자 구별이나 숫자등 다른 것들이 있으면 안된다.

	list<char> saveLetter;
	list<char>::iterator itor;

	for (int i = 0; i < input.length(); ++i) // 문자열 전체 탐색
	{
		char c = input.at(i);
		int temp = (int)c - 97;

		++strCount[temp];

		if (strCount[temp] == 1)
		{
			saveLetter.push_back(c); // list에 삽입
		}
		else if (strCount[temp] == 2)
		{
			itor = find(saveLetter.begin(), saveLetter.end(), c); // 2개 이상시 해당 값 찾아서 삭제
			saveLetter.erase(itor);
		}
	}

	return saveLetter.front(); // 결국 가장 앞의 값이 반복되지 않는 첫번째 문자
}

int main()
{
	string input;
	cin >> input;
	cout << solve(input) << endl;
}