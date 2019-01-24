#include <iostream>

using namespace std;

int checkCount(char *arr, char *str, int num);

int main()
{
	int num;
	
	cin >> num;
	char *arr = new char[num + 1];

	cin >> arr;

	char *a = new char[num + 1];
	char *b = new char[num + 1];
	char *c = new char[num + 1];
	char *d = new char[num + 1];
	char *e = new char[num + 1];
	char *f = new char[num + 1];

	for (int i = 0; i < num; i += 3)
	{
		a[i] = 'B';
		b[i] = 'B';
		c[i] = 'R';
		d[i] = 'R';
		e[i] = 'G';
		f[i] = 'G';
	}

	for (int i = 1; i < num; i += 3)
	{
		a[i] = 'R';
		b[i] = 'G';
		c[i] = 'G';
		d[i] = 'B';
		e[i] = 'B';
		f[i] = 'R';
	}

	for (int i = 2; i < num; i += 3)
	{
		a[i] = 'G';
		b[i] = 'R';
		c[i] = 'B';
		d[i] = 'G';
		e[i] = 'R';
		f[i] = 'B';
	}

	int count[6];
	
	count[0] = checkCount(arr, a, num);
	count[1] = checkCount(arr, b, num);
	count[2] = checkCount(arr, c, num);
	count[3] = checkCount(arr, d, num);
	count[4] = checkCount(arr, e, num);
	count[5] = checkCount(arr, f, num);

	int min = count[0];
	int temp = 0;
	for (int i = 1; i < 6; i++)
	{
		if (count[i] < min)
		{
			temp = i;
			min = count[i];
		}
	}

	for (int i = 0; i < num; i += 3)
	{
		switch (temp)
		{
		case 0:
			arr[i] = 'B';
			break;
		case 1:
			arr[i] = 'B';
			break;
		case 2:
			arr[i] = 'R';
			break;
		case 3:
			arr[i] = 'R';
			break;
		case 4:
			arr[i] = 'G';
			break;
		case 5:
			arr[i] = 'G';
			break;
		}
	}

	for (int i = 1; i < num; i += 3)
	{
		switch (temp)
		{
		case 0:
			arr[i] = 'R';
			break;
		case 1:
			arr[i] = 'G';
			break;
		case 2:
			arr[i] = 'G';
			break;
		case 3:
			arr[i] = 'B';
			break;
		case 4:
			arr[i] = 'B';
			break;
		case 5:
			arr[i] = 'R';
			break;
		}
	}

	for (int i = 2; i < num; i += 3)
	{
		switch (temp)
		{
		case 0:
			arr[i] = 'G';
			break;
		case 1:
			arr[i] = 'R';
			break;
		case 2:
			arr[i] = 'B';
			break;
		case 3:
			arr[i] = 'G';
			break;
		case 4:
			arr[i] = 'R';
			break;
		case 5:
			arr[i] = 'B';
			break;
		}
	}

	cout << min << endl;
	cout << arr;

	system("pause");
	return 0;
}

int checkCount(char *arr, char *str, int num)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] != str[i])
		{
			count++;
		}
	}

	return count;
}