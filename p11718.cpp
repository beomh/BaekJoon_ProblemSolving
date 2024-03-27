#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string line;
	while (getline(cin, line)) {
		cout << line << "\n";
	}
	return 0;
}