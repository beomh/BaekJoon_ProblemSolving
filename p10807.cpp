// �� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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