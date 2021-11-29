#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

bool Include(const string str, const string cs)
{
	bool r = true;
	for (size_t i = 0; i < cs.length(); i++)
		r = r && (str.find(cs[i]) != -1);
	return r;
}
string Change(string& str)
{
	size_t pos = 0;
	while ((pos = str.find('w', pos)) != -1)
		if (str[pos + 1] == 'h' && str[pos + 2] == 'i' && str[pos + 3] == 'l' && str[pos + 4] == 'e')
			str.replace(pos, 5, "**");
	return str;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);

	string cs = "while";
	if (Include(str, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	string dest = Change(str);
	cout << "Modified string (param) :" << str << endl;
	cout << "Modified string (result) :" << dest << endl;

	return 0;
}