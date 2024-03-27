// 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다. 또, 1번부터 N번까지 번호가 적혀있는 공을 매우 많이 가지고 있다. 가장 처음 바구니에는 공이 들어있지 않으며, 바구니에는 공을 1개만 넣을 수 있다.

#include <iostream>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;

	int start, finish;
	int value;

	std::vector<int> buckets(n, 0);
	for (int i = 0; i < m; i++)
	{
		std::cin >> start >> finish >> value;
		for (int j = start - 1; j <= finish - 1; j++)
		{
			buckets[j] = value;
		}
	}

	for (auto ele : buckets)
	{
		std::cout << ele << " ";
	}
	
	return 0;
}