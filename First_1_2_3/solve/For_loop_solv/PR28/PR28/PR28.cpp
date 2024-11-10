#include<iostream>
using namespace std;

int SumOddNumber(int num)
{
	int sum = 0;
	int i;
	for (i = 1;i <= num;i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	return sum;
}
int main()
{
	cout << "Please enter number .." << endl;
	int num;
	cin >> num;
	cout << SumOddNumber(num) << endl;
}