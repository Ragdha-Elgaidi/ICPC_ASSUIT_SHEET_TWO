#include<iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int Number=0;
	int temp = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> Number;
		if (Number>temp)
		{

			temp = Number;
		}
	}
	cout << temp << endl;
	return 0;
}
