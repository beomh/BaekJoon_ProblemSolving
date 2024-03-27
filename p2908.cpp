#include <iostream>
#include <string>

using namespace std;
int main()
{
	string num1, num2;
	cin >> num1 >> num2;

	for (int i = 0; i < num1.length() / 2; i++)
	{
		char tmp = num1[i];
		num1[i] = num1[num1.length() - 1 - i];
		num1[num1.length() - 1 - i] = tmp;
	}
	for (int i = 0; i < num2.length() / 2; i++)
	{
		char tmp = num2[i];
		num2[i] = num2[num2.length() - 1 - i];
		num2[num2.length() - 1 - i] = tmp;
	}
	int i_num1, i_num2;
	i_num1 = stoi(num1);
	i_num2 = stoi(num2);
	int result = (i_num1 > i_num2) ? i_num1 : i_num2;
	std::cout << result;
	return 0;
}
