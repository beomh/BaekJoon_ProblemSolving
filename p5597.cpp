//X���� M�������� ���α׷��� ������ �ð� �ִ�.���ǿ� �л��� 30���� �ִµ�, �л� ��ο� �� �л����� 1������ 30������ �⼮��ȣ�� �پ� �ִ�.
//
//�������� ���� Ư�������� 28���� �����ߴµ�, �� �߿��� ���� �� �� �л� 2���� �⼮��ȣ�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <vector>

int main()
{
	std::vector<bool> studentIDs(30, false);
	int doneStudentID;
	for (int i = 0; i < 28; i++)
	{
		std::cin >> doneStudentID;
		studentIDs[doneStudentID - 1] = true;
	}
	for (int i=0;i<studentIDs.size();i++)
	{
		if (studentIDs[i] == false)
			std::cout << ++i << "\n";
	}
	return 0;
}