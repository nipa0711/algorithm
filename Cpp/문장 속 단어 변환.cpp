#include <iostream>
#include <string>

using namespace std;

string replace(string str1, string str2, string str3)
{
	string::size_type offset = 0;

	while (true)
	{
		offset = str1.find(str2, offset);

		if (string::npos == offset)
		{
			break;
		}
		else
		{
			str1.replace(offset, str2.length(), str3);
		}
	}

	return str1;
}

int main()
{
	string str1, str2, str3;
	cout << "���� �Է�" << endl;
	getline(cin, str1);
	cout << "ã�� �ܾ� �Է�" << endl;
	getline(cin, str2);
	cout << "�ٲ� �ܾ� �Է�" << endl;
	getline(cin, str3);
	cout << replace(str1, str2, str3) << endl;
}
