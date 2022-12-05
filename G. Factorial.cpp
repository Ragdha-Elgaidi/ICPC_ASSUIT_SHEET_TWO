#include<iostream>
using namespace std;

int main()
{
	int T;

	cin >> T;
	
	int N;
	

	for (int i = 1; i <= T; i++)
	{
		long long  factorial = 1;

		cin >> N;
		if (N == 0)
			cout << 1 << endl;
		else
		{
			for (int j = 1; j <= N; j++)
			{
				factorial *= j;
			}
			cout << factorial << endl;
		}
	}

	
	return 0;
}
