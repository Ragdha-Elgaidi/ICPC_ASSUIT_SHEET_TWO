#include<iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;
	int X = 0, count_odd = 0, count_even = 0, count_postive = 0, count_negative = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> X;
		if (X % 2 == 0)
			count_even++;
		else 
			count_odd++;
		
		if (X > 0)
			count_postive++;
		else if (X < 0)
			count_negative++;
	}
	
	cout << "Even: " << count_even << endl;
	cout << "Odd: " << count_odd << endl;
	cout << "Positive: " << count_postive << endl;
	cout << "Negative: " <<count_negative << endl;
	return 0;
}
