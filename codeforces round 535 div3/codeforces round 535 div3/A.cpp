#include <iostream>

using namespace std;

int main()
{
	int num;
	int l1, r1, l2, r2;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> l1 >> r1 >> l2 >> r2;

		if (l1 != l2)
		{
			cout << l1 << ' ' << l2 << endl;
		}
		else
		{
			cout << l1 << ' ' << r2 << endl;
		}
	}

	system("pause");
	return 0;
}