#include<iostream>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	while(N>0&&M>0)
	{
		if (N > M)
			swap(N, M);
		int Sum = 0;
		for (int i = N; i <= M; i++)
		{
			Sum += i;
			cout << i << " ";
		}
		cout << "sum =" << Sum << endl;
		cin >> N >> M;
	}
	return 0;
}
