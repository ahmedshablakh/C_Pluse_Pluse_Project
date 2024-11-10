#include<iostream>
using namespace std;

struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadInfo(strInfo &Info)
{
	cout << "Please enter your FirsNmae" << endl;
	cin >> Info.FirstName;
	cout << "Please enter your LastNmae" << endl;
	cin >> Info.LastName;
	cout << "Please enter your Age " << endl;
	cin >> Info.Age;
	cout << "Please enter your Phpne " << endl;
	cin >> Info.Phone;

}
void PrintInfo(strInfo Info)
{
	cout << "\n**************************** \n\n";

	cout << "FirstName : " << Info.FirstName << endl;
	cout << "LastName : " << Info.LastName << endl;
	cout << "Age : " << Info.Age << endl;
	cout << "Phone : " << Info.Phone << endl;

	cout << "\n**************************** \n";
}

int main()
{

	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);


}