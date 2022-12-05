#include<iostream>
using namespace std;

int main()
{
	int K = 0, S = 0;

	cin >> K >> S;
	int counter = 0;
	for (int i=0;i<=K;i++)
	{
		for (int j = 0; j <= K; j++)
		{
			if ((S - i - j) >= 0 && (S - i - j) <= K)
				counter++;
		}
	}
	cout << counter << endl;
	return 0;
}
