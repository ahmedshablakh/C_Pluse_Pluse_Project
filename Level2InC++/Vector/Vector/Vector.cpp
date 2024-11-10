#include<iostream>
#include<vector>
using namespace std;

void ReadNumber(vector <int>& Number)
{
	int ReadNumber;
	char ReadMore = 'Y';
	
	do
	{
		cout << "Please enter your number .. \n";
		cin >> ReadNumber;
		Number.push_back(ReadNumber);
		cout << "Do you want to enter another number? Y or N \n";
		cin >> ReadMore;
	} while (ReadMore == 'Y' || ReadMore == 'y');
}
void PrintVector(vector <int>& Number)
{
	cout << "\n\n\n The Vocter Numbers is : \n";
	for (int &i : Number)
	{
		cout << i << endl;
	}
}
int main()
{

	cout << "Vector element with Range Loop and References ( & )  ..\n";

	vector <int> vNum = { 1,2,3,4,5,6,7,8,9 };

	for (int &i : vNum)
	{
		cout << i << "\n";
	}


	cout << "\n\nAdd element with PUSH BACK element ..\n";
	vector <int> add;
	
	add.push_back(50);
	add.push_back(60);
	add.push_back(70);
	add.push_back(80);
	for (int &i : add)
	{
		cout << i << "\n";
	}


	vector <int> vNumbers;
	ReadNumber(vNumbers);
	PrintVector(vNumbers);
	
	return 0;
}