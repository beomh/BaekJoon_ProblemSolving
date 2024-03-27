// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

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