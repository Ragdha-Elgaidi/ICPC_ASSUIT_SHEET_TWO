#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	int T;

	cin >> T;
	int ones = 0;
	int sum = 0;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		int ones = 0;
		while (N > 0)
		{
			if (N % 2 == 1)
			{
				ones++;
			}
			N /= 2;
		}
		
		for (int j = 0; j < ones; j++)
		{
			sum +=1*pow(2, j);
		}
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
