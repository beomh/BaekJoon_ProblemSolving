// 공바꾸기
// --------------------------------------------
//도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다.바구니에는 공이 1개씩 들어있고, 처음에는 바구니에 적혀있는 번호와 같은 번호가 적힌 공이 들어있다.
//
//도현이는 앞으로 M번 공을 바꾸려고 한다.도현이는 공을 바꿀 바구니 2개를 선택하고, 두 바구니에 들어있는 공을 서로 교환한다.
//
//공을 어떻게 바꿀지가 주어졌을 때, M번 공을 바꾼 이후에 각 바구니에 어떤 공이 들어있는지 구하는 프로그램을 작성하시오.
// --------------------------------------------

#include <iostream>
#include <vector>

void swap(int& a, int& b)
{
	int tmp;
	tmp = b;
	b = a;
	a = tmp;
}

int main()
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> buckets(n);
	for (int i=0;i<buckets.size();i++)
	{
		buckets[i] = i+1;
	}

	int swapTarget1, swapTarget2;
	for (int i = 0; i < m; i++)
	{
		std::cin >> swapTarget1 >> swapTarget2;
		swap(buckets[swapTarget1-1], buckets[swapTarget2-1]);
	}

	std::vector<int>::iterator it;
	for (it = buckets.begin(); it < buckets.end(); it++)
	{
		std::cout << *it << " ";
	}
	return 0;
}