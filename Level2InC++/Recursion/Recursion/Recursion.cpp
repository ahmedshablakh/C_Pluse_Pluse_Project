#include<iostream>

using namespace std;

void PrintNumber(int M, int N)
{
	if (M >= N)
	{
		cout << M << endl;
		PrintNumber(M - 1, N);
	}
}
int  PrintPower(int N, int P)
{
	
	if (P == 0)
		return 1;

	else

		return (N * PrintPower(N, P - 1));
}
int main()
{

	cout << "************* Using Recursion *************  \n";

	cout << "Function To Print numbers From M(5) down to n(1)  \n";
	PrintNumber(5 , 1);
	cout << "Function To Print Calulate Power N^M \n";
	cout << PrintPower(2, 0);

	return 0;
}