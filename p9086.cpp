#include <iostream>
#include <string>

int main()
{
	int numLoop;
	std::cin >> numLoop;
	for (int i = 0; i < numLoop; ++i) {
		std::string tmp;
		std::cin >> tmp;
		std::cout << tmp.front() << tmp.back() << std::endl;
	}
	return 0;
}