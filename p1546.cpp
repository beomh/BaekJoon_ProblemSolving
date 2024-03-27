// ЦђБе
#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	double maxScore = 0;
	double score;
	double totalscore = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> score;
		maxScore = score > maxScore ? score : maxScore;
		totalscore += score;
	}
	std::cout << (100 * totalscore) / (maxScore * n);
	return 0;
}