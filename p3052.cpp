// ³ª¸ÓÁö

#include <iostream>
#include <set>

int main()
{
	std::set<int> remainders;

	int target;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> target;
		remainders.insert(target % 42);
	}
	std::cout << remainders.size();
	return 0;
}