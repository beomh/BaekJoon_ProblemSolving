// 바구니 역순으로 뒤집기
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> buckets(n);
	for (int i = 0; i < n; i++)
	{
		buckets[i] = i + 1;
	}

	int start, end;
	for (int i = 0; i < m; i++)
	{
		std::cin >> start >> end;
		std::reverse(buckets.begin() + start-1, buckets.begin() + end);
	}

	for (std::vector<int>::iterator it = buckets.begin(); it < buckets.end(); it++)
	{
		std::cout << *it << " ";
	}
	return 0;
}