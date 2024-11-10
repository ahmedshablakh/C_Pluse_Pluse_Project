#include<iostream>
using namespace std;

struct strInfo
{
	string FirstName;
	string LastName;
	short Age;
	string Phone;
	
};
void ReadInfo(strInfo& Person)
{
	cout << "Please enter your First Name " << endl;
	cin >> Person.FirstName;
	cout << "Please enter your Last Name " << endl;
	cin >> Person.LastName;
	cout << "Please enter your Age " << endl;
	cin >> Person.Age;
	cout << "Please enter your Phone " << endl;
	cin >> Person.Phone;
	cout << " *********************************" << endl;
}
void PrintInfo(strInfo Person)
{
	cout << " *********************************" << endl << endl;
   cout << "First_Name :"  <<Person.FirstName << endl;
   cout << "Last_Name :" << Person.LastName << endl;
   cout << "Age :" << Person.Age << endl;
   cout << "Phone :" << Person.Phone << endl << endl ;
   cout << " *********************************" << endl;
}
void ReadPersonInfo(strInfo Person[100],int lenght)
{
	for(int i=0 ; i<=lenght -1 ;i++)

	{
		ReadInfo(Person[i]);
	}
	
}
void PrintPersonInfo(strInfo Person[100], int lenght)
{
	cout << " *********************************" << endl;
	for (int i = 0; i <= lenght - 1;i++)

	{
		PrintInfo(Person[i]);
	}
	
}

int main() {
	 
	strInfo Person[100];
	int lenght;
	cout << "Please enter the number Person..?" << endl;
	cin >> lenght;
	ReadPersonInfo(Person, lenght);
	PrintPersonInfo(Person, lenght);


	return 0;
}