/*

Divisor of Number is A number that divides the integer exactly (no remainder).

In other words the division works perfectly with no fractions or remainders involved.

Examples:

	3 is a divisor of 12, because 12 ÷ 3 = 4 exactly
	4 is a divisor of 12, because 12 ÷ 4 = 3 exactly.
	5 is not a divisor of 12, because 12 ÷ 5 = 2 with a remainder of 2.

a divisor is also a factor of the original integer.*/
#include<iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			cout << i << endl;
	}
	
	return 0;
}
