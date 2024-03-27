// �����̴� �ٱ��ϸ� �� N�� ������ �ְ�, ������ �ٱ��Ͽ��� 1������ N������ ��ȣ�� �Ű��� �ִ�. ��, 1������ N������ ��ȣ�� �����ִ� ���� �ſ� ���� ������ �ִ�. ���� ó�� �ٱ��Ͽ��� ���� ������� ������, �ٱ��Ͽ��� ���� 1���� ���� �� �ִ�.

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