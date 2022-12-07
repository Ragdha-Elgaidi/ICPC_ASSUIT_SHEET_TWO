/*
A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
In other words : prime number divisible only by 1 and itself.
*/
#include<iostream>
using namespace std;

int main()
{
	int target;

	cin >> target;

	for (int number = 2; number <= target; ++number)
	{
		bool is_ok = true;

		for (int i = 2; i < number; ++i) 
		{
			if (number % i == 0) 
			{
				is_ok = false;
				break;
			}
		}
		if (is_ok)
			cout << number<<" ";
	}

	return 0;
}
