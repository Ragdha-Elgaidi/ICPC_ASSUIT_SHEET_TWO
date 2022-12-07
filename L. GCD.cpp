/*
The greatest common divisor (GCD) of two or more integers,
which are not all zeroes, is the largest positive integer that divides each of the integers.
For example:
What is the greatest common divisor of 54 and 24?

*The number 54 can be expressed as a product of two integers in several different ways:

54 * 1 = 27 * 2 = 18 * 3 = 9 * 6 .....

Thus the divisors of 54 are: 1,2,3,6,9,18,27,54

Similarly, the divisors of 24 are: 1,2,3,4,6,8,12,24

The numbers that these two lists share in common are the common divisors of 54 and 24:

1,2,3,6

The greatest of these is 6. That is, the greatest common divisor of 54 and 24. One writes:

gcd(54,24) = 6.
*/
#include<iostream>
using namespace std;

int main()
{
	int A, B;
	int GCD = 0;
	cin >> A >> B;
	if (A > B)
	{
		swap(A, B);
	}
	for (int i = 1; i <= B; i++)
	{
		if (A % i == 0 && B % i == 0)
			GCD = i;
	}
	cout << GCD ;

	return 0;
}
