/*
A palindrome number is a number that reads the same forward or backward.

For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.

A leading zero is any 0 digit that comes before the first nonzero digit in a number 
for example : numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes
but ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .
*/

#include<iostream>
using namespace std;

int main()
{
	int N, temp,reverse=0;

	cin >> N;
	temp = N;
	while (N)
	{
		reverse = reverse * 10 + N % 10;
		N /= 10;
	}
	if (temp == reverse)
	{
		cout << reverse << endl << "YES" << endl;
	}
	else
		cout << reverse << endl << "NO" << endl;

	return 0;
}
