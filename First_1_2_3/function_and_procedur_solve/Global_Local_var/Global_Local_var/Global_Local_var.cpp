#include<iostream>
using namespace std;

int x = 10;
void myStructre()
{
	int x = 20;
	cout << x << endl;
}
int main()
{
	myStructre();
	int x = 30;
	cout << x << endl;
	cout << ::x << endl;

}