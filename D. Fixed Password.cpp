#include<iostream>
using namespace std;

int main()
{
	int Password;

	cin >> Password;
	
	while (Password != 1999)
	{
		cout << "Wrong" << endl;
		cin >> Password;
	}

	cout << "Correct" << endl;

	return 0;
}
