#include <iostream>

using namespace std;

int main()
{
	int num;
	char lamp[5] = { 'B','G','R','B','G' };
	int count = 0;

	cin >> num;

	char *arr = new char[num + 1];
	cin >> arr;


	int t = 0;
	char temp[3];
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			if (arr[i + 1] == arr[i + 2])
			{
				for (int j = 0; j < 3; j++)
				{
					if (lamp[j] == arr[i])
					{
						temp[0] = lamp[j + 1];
						break;
					}
				}

				arr[i + 1] = temp[0];
				count++;
			}
			else
			{
				if (arr[i + 2] == NULL)
				{
					for (int j = 0; j < 3; j++)
					{
						if (lamp[j] == arr[i])
						{
							temp[0] = lamp[j + 1];
							break;
						}
					}
				}
				else
				{
					for (int j = 0; j < 3; j++)
					{
						if (lamp[j] == arr[i])
						{
							temp[0] = lamp[j + 1];
							t = j;
							break;
						}
					}

					if (temp[0] == arr[i + 2])
					{
						temp[0] = lamp[t + 2];
					}
				}

				arr[i + 1] = temp[0];
				count++;
			}
		}
	}

	cout << count << endl;
	cout << arr;

	system("pause");
	return 0;
}