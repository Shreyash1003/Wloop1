#include <iostream>
using namespace std;
int main()
{
	int i=0, n;
	cout << "Enter the number- ";
	cin >> n;
	while (i >= n)
	{
		cout << i;
		i++;
	}
	cout << i;

}