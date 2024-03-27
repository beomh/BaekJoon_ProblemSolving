#include <iostream>
#include <string> 

int main() {
	using namespace std;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			break;
		else if (i == str.length() - 1 && str[i] == ' ')
		{
			std::cout << 0;
			return 0;
		}
		else {
			continue;
		}
	}

	auto it = str.begin();
	for (int i = 0; i < str.length(); i++)
		if (str[i] != ' ')
		{
			str.erase(it, it + i);
			break;
		}

	it = str.end();
	for (int i = str.length(); i > 0; i--)
		if (str[i - 1] != ' ')
		{
			str.erase(it - str.length() + i - 1, it);
			break;
		}
	int wordCnt = 0;
	for (auto ele : str)
	{
		if (ele == ' ')
			wordCnt++;
	}
	std::cout << wordCnt + 1;

	return 0;
}