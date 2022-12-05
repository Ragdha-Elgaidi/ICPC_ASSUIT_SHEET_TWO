#include<iostream>
using namespace std;

int main()
{
	int N;
    int a = 0, b = 1;

	cin >> N;
	if (N == 1)
		cout << a<< " ";
	else if (N == 2)
		cout << a <<" " << b << " ";
	else
	{
		cout << a << " " << b << " ";
		for (int a = 0, b = 1, count = 2; count < N; count++)
		{
			int c = a + b;
			a = b;
			b = c;
			cout << c << " ";

		}
	}
	return 0;
}
