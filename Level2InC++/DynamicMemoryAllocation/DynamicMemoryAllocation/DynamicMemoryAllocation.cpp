#include<iostream>
using namespace std;

int main()
{


	int* prt;
	prt = new int;
	*prt = 45;
	cout << *prt << endl;
	delete prt;

	int num;
	int* p;
	cout << "please enter length the arry\n";
	cin >> num;
	p = new int[num];

	for (int i = 0;i < num;++i)
	{
		cout << "plase enter value ;\n";
		cin >> *(p + i);

	}
	for (int i = 0;i < num;++i)
	{
		cout << "value is : " << *(p+i) << endl;
	}
	delete [] p;




}

