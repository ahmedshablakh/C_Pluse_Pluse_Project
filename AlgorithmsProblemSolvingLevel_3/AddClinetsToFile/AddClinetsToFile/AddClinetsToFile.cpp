#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
const string ClientDataFile = "Client.txt";
struct ClienttData
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

ClienttData ReadNewClient()
{
	ClienttData Client;
	cout << "Enter Account Number? ";
	getline(cin>>ws, Client.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);
	cout << "Enter Name? ";
	getline(cin, Client.Name);
	cout << "Enter Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;
	return Client;

}
string ConvertRecordToLine(ClienttData Client, string Seperator = "#//#")
{
	string S;
	S = Client.AccountNumber + Seperator;
	S += Client.PinCode + Seperator;
	S += Client.Name + Seperator;
	S += Client.Phone + Seperator;
	S += to_string(Client.AccountBalance);
	return S;
}
void AddDataLineToFile(string SclinetData,string FileNaem)
{
	fstream MyData;
			// file Write 
	MyData.open(FileNaem, ios::out | ios::app);
		if (MyData.is_open())
		{
			MyData << SclinetData << endl;
			MyData.close();
		}
}
void AddNewClient()
{

	AddDataLineToFile(ConvertRecordToLine(ReadNewClient()), ClientDataFile);
}
void AddClient()
{
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding New Client :\n";
		AddNewClient();
		cout << "\n\nClinet Added Successfully, do you want to add more clinets ? Y or N  ";
		cin >> AddMore;
		
	} while (toupper(AddMore) =='Y');
}

int main()
{

	AddClient();
	return 0;
}