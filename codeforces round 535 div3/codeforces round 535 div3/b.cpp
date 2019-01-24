#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;
	int *arr = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	int max = arr[0];
	for (int i = 1; i < num; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	int num1, num2;
	num1 = max;

	for (int i = 1; i < (max + 1); i++)
	{
		if ((max % i) == 0)
		{
			for (int j = 0; j < num; j++)
			{
				if (arr[j] == i)
				{
					arr[j] = 0;
					break;
				}
			}
		}
	}

	int max1 = arr[0];
	for (int i = 1; i < num; i++)
	{
		if (arr[i] > max1)
		{
			max1 = arr[i];
		}
	}
	num2 = max1;

	cout << num1 << ' ' << num2;

	system("pause");
	return 0;
}