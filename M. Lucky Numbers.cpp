#include<iostream>
using namespace std;

int main()
{
	int A=1, B=1,count=0;

	cin >> A >> B;
	for (int i = A; i <= B; i++)
	{
		int lucky=0,x = i;
		while(x)
		{
			if (x%10 != 4 && x%10 != 7)
			{
				lucky++;
			}
			x /= 10;
		}
		if (lucky == 0)
		{
			cout << i << " ";
			count++;
		}
	}
	if (count == 0)
	{
		cout << -1 << endl;
	}
	return 0;
}
