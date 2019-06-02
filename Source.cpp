#include <iostream>
#include <vector>
using namespace std;

int min(vector < vector < int > >Min)
{
	int m = Min[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Min[i][j] < m)
				m = Min[i][j];
		}
	}
	return m;
}

int main()
{
	int a;
	vector<vector<int>> Min(4);
	for (int i = 0; i < 3; i++)
	{
		Min[i] = vector<int>(3);
	}
	Min = { {0, 0, 0},
			{0, 0, 0},
			{0, 0, 0},
			{0, 0, 0}};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			Min[i][j] = a;
		}
	}
	cout <<"min: "<< min(Min);

	system("pause");
}