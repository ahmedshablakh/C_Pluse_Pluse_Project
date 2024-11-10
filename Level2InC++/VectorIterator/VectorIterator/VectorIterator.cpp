#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> azam = {1,2,3,4,5};
	vector <int>::iterator ite;

	for (ite = azam.begin();ite != azam.end();ite++)
	{
		cout << *ite << "  " << &ite<<endl;

	}
	return 0;
}