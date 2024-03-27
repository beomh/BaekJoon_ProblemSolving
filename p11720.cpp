#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::string str;
	std::cin >> str;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += str[i] - '0';
	}
	std::cout << sum;
	return 0;
}