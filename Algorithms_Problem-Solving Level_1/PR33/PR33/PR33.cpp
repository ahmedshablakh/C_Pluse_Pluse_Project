#include<iostream>
using namespace std;

int ReadGrade()
{
	cout << "Please enter Grade.. \n";
	int G;
	cin >> G;
	return G;
}
void printResult(int G)
{
	
	if (G >= 0 && G <= 100)
	{
		if (G >= 90)
			cout << " A \n";
		else if (G >= 80)
			cout << " B \n";
		else if (G >= 70)
			cout << " C \n";
		else if (G >= 60)
			cout << " D \n";
		else if (G >= 60)
			cout << " E \n";
		else
			cout << " F \n";
	}
	else
	{
		cout << "Error...?\n ";
		printResult(ReadGrade());

	}
}

int main()
{

	printResult(ReadGrade());
	return 0;
}