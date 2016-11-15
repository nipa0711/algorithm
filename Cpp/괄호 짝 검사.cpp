/*
괄호 짝 검사.
스택을 쓰지 않고 구현해볼려고 했지만,
스택이라는 것만 안썻을뿐, 사실상 스택이나 다름없는 것 같습니다.
모든 경우에 대해 성립하는지에 대해서도 자신이 없군요. 킁..
*/

#include <iostream>
#include <string>

using namespace std;

string solve(string str1)
{
	int smallBracket = 0;
	int middleBracket = 0;
	int bigBracket = 0;
	char *chk = new char[str1.length()];
	int count = 0;

	for (int i = 0; i < str1.length(); ++i)
	{
		char c = str1[i];

		switch (c)
		{
		case '(':
			smallBracket++;
			chk[count] = '(';
			count++;
			break;
		case ')':
		{
			if (chk[count - 1] != '(')
			{
				return "잘못된 사용입니다!";
			}
			smallBracket--;
			count--;
			break;
		}
		case '{':
			middleBracket++;
			chk[count] = '{';
			count++;
			break;
		case '}':
		{
			if (chk[count - 1] != '{')
			{
				return "잘못된 사용입니다!";
			}
			middleBracket--;
			count--;
			break;
		}
		case '[':
			bigBracket++;
			chk[count] = '[';
			count++;
			break;
		case ']':
		{
			if (chk[count - 1] != '[')
			{
				return "잘못된 사용입니다!";
			}
			bigBracket--;
			count--;
			break;
		}
		}

		if (smallBracket < 0 || middleBracket < 0 || bigBracket < 0)
		{
			return "잘못된 사용입니다!";
		}
	}

	if (smallBracket == 0 && middleBracket == 0 && bigBracket == 0)
	{
		return "괄호 짝이 맞습니다!";
	}

	return "잘못된 사용입니다!";
}

int main()
{
	string str1;
	cout << "문장 입력" << endl;
	getline(cin, str1);
	cout << solve(str1) << endl;
}
