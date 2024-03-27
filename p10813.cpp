// ���ٲٱ�
// --------------------------------------------
//�����̴� �ٱ��ϸ� �� N�� ������ �ְ�, ������ �ٱ��Ͽ��� 1������ N������ ��ȣ�� �Ű��� �ִ�.�ٱ��Ͽ��� ���� 1���� ����ְ�, ó������ �ٱ��Ͽ� �����ִ� ��ȣ�� ���� ��ȣ�� ���� ���� ����ִ�.
//
//�����̴� ������ M�� ���� �ٲٷ��� �Ѵ�.�����̴� ���� �ٲ� �ٱ��� 2���� �����ϰ�, �� �ٱ��Ͽ� ����ִ� ���� ���� ��ȯ�Ѵ�.
//
//���� ��� �ٲ����� �־����� ��, M�� ���� �ٲ� ���Ŀ� �� �ٱ��Ͽ� � ���� ����ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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