#include<iostream>
#include<string>
using namespace std;
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;

}
float SumNumbers()
{
	int sum = 0, Number = 0, Counter = 1;
	do
	{
		Number = ReadNumber("Please enter Number " + to_string(Counter));
		if (Number == -99) 
		{
			break;
		}
		sum += Number;
		Counter++;
	} while (Number != -99);
	return sum;
}
int main()

{
cout << endl << "Result = " << SumNumbers() << endl;
	return 0;
}
