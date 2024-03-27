#include <iostream>
#include <string>

int main()
{
	int testNum;
	std::cin >> testNum;

	for (int i = 0; i < testNum; i++)
	{
		int repeatNum;
		std::string str;
		std::cin >> repeatNum >> str;

		for (auto ch : str)
		{
			for (int re = 0; re < repeatNum; re++)
			{
				std::cout << ch;
			}
		}
		std::cout << "\n";
	}
	return 0;

}