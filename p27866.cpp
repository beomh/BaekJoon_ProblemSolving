#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	int n;
	std::cin >> n;

	std::cout << str[n-1];
	return 0;
}