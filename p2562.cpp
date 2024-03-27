// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

#include <iostream>
#include <utility>

int main()
{
	std::pair<int, int> maxIdxValue = { 0, 0 };
	int data;
	for (int i = 0; i < 9; i++)
	{
		std::cin >> data;
		if (data > maxIdxValue.second)
		{
			maxIdxValue.first = i+1;
			maxIdxValue.second = data;
		}
	}
	std::cout << maxIdxValue.second << "\n" << maxIdxValue.first;
	return 0;
}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int arr[9];
//	for (size_t i = 0; i < sizeof(arr)/sizeof(int); i++)
//		cin >> arr[i];
//
//	std::pair<int*, int*> minmax = std::minmax_element(std::begin(arr), std::end(arr));
//
//	std::cout << "The max element is " << *(minmax.second) << std::endl;
//	std::cout << "The min element is " << *(minmax.first) << std::endl;
//
//	return 0;
//}