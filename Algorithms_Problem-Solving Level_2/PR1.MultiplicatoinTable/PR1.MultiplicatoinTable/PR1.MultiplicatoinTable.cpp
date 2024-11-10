#include<iostream>
using namespace std;

void PrintTebleHeader()
{
	cout << "\n\n \t\t\t\t Multipliaction Table From 1 to 10\n\n";
	for (int i = 1;i <= 10;i++)
	{
		cout << "\t" << i;

	}
	cout << endl;
	for (int i = 1;i <= 21;i++)
	{
		cout << "____";

	}


}
string ColumSperator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}
void PrintMultiplicationTable()
{
	PrintTebleHeader();
	cout << endl;
	for (int i = 1;i <= 10;i++)
	{
		cout << i << ColumSperator(i);
		for (int j = 1;j <= 10;j++)
		{
			cout << "\t" << i * j;
		}
		cout << endl;
	}
}


int main()
{
	PrintMultiplicationTable();

}