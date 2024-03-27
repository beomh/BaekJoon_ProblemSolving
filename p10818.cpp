// N���� ������ �־�����.�̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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