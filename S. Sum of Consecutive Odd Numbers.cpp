#include<iostream>
using namespace std;

int main()
{
	int T = 0;
	long long X, Y;

	cin >> T;
	while (T--)
	{
		long long Sum = 0;
		cin >> X >> Y;
		if (X > Y)
		{ 
			swap(X, Y);
		}
		for (int i = X + 1; i < Y; i++)
		{
			if (i % 2 != 0)
				Sum += i;
		}
		cout << Sum << endl;
		
	}
}
