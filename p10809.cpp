#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;

	for (char target = 'a'; target <= 'z'; target++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			std::cout << (int)str.find(target) << " ";
			break;
		}
	}
	return 0;
}