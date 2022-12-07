#include<iostream>
using namespace std;

int main()
{ 
	int n;

    cin >> n;

    int num = 1;
    while (n--) 
    {
        for (int i = 1; i <= 3; i++)
        {

            cout << num << " ";
            num++;
        }
        cout << "PUM" << endl;
        num += 1;
    }
    return 0;
}
	
