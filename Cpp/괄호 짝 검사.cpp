/*
��ȣ ¦ �˻�.
������ ���� �ʰ� �����غ����� ������,
�����̶�� �͸� �ț�����, ��ǻ� �����̳� �ٸ����� �� �����ϴ�.
��� ��쿡 ���� �����ϴ����� ���ؼ��� �ڽ��� ������. ů..
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
				return "�߸��� ����Դϴ�!";
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
				return "�߸��� ����Դϴ�!";
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
				return "�߸��� ����Դϴ�!";
			}
			bigBracket--;
			count--;
			break;
		}
		}

		if (smallBracket < 0 || middleBracket < 0 || bigBracket < 0)
		{
			return "�߸��� ����Դϴ�!";
		}
	}

	if (smallBracket == 0 && middleBracket == 0 && bigBracket == 0)
	{
		return "��ȣ ¦�� �½��ϴ�!";
	}

	return "�߸��� ����Դϴ�!";
}

int main()
{
	string str1;
	cout << "���� �Է�" << endl;
	getline(cin, str1);
	cout << solve(str1) << endl;
}
