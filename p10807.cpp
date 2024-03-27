// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>

int main() 
{
	int numOfDec = 0;
	std::cin >> numOfDec;

	std::vector<int> data;
	int tmpInput;
	for (int i = 0; i < numOfDec; i++)
	{
		std::cin >> tmpInput;
		data.emplace_back(tmpInput);
	}

	int targetNum;
	std::cin >> targetNum;

	int targetNumCnt = 0;
	for (auto ele : data)
	{
		if (targetNum == ele)
			targetNumCnt++;
	}

	std::cout << targetNumCnt << std::endl;
	return 0;
}