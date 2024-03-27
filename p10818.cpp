// N개의 정수가 주어진다.이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

#include <iostream>
#include <cstdint>

int main()
{

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n;
	std::cin >> n;

	int data;
	int maxData = INT32_MIN;
	int minData = INT32_MAX;
	for (int i = 0; i < n; i++)
	{
		std::cin >> data;
		maxData = (data > maxData) ? data : maxData;
		minData = (data < minData) ? data : minData;
	}
	std::cout << minData << " " << maxData;
	return 0;
}