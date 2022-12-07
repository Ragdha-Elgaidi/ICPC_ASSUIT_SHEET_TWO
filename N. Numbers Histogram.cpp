#include<iostream>
using namespace std;

int main()
{
	int N,T;
	char S;

	cin >>S>>T;
	while (T--)
	{
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			cout << S;
		}
		cout << endl;
	}
	return 0;
}
