// ���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>

int main()
{
	int N, X;
	std::cin >> N >> X;

	int compareNum;
	for (int i = 0; i < N; i++)
	{
		std::cin >> compareNum;
		if (compareNum < X)
			std::cout << compareNum << " ";
	}

	return 0;
}