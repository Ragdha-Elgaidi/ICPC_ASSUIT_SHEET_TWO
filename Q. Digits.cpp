#include<iostream>
using namespace std;

int main()
{
	int T;
	int N;

	cin >> T;
	
	while (T--)
	{	
		cin >> N;
		if (N == 0)
			cout << 0;
	    while (N > 0)
	    {
			int last_digit = N % 10;
			cout << last_digit << " ";
			 N /= 10;
		}
		cout << endl;
	}
	return 0;
}
