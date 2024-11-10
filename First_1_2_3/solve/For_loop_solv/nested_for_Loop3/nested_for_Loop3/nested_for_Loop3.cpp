#include<iostream>
using namespace std;
int main()
{
	for (int i = 65;i <91;i++)
	{
		cout << " Letter of " << char(i) << endl;
		for (int j = 65; j< 91;j++) 
		{
			cout << char(i) << char(j) << endl;

		}
		cout << "------------------------------" << endl;
	}

}