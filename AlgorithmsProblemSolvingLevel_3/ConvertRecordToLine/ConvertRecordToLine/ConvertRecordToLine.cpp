#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ClinetData
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	float AccountBalance;
};
ClinetData ReadData()
{
	ClinetData Client;
	cout << "Enter Account Number? ";
	getline(cin, Client.AccountNumber); 
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
string ConvertRecordToLine(ClinetData Client, string Seperator = "#//#")
{
	string S;
	S = Client.AccountNumber + Seperator;
	S+= Client.PinCode + Seperator;
	S += Client.Name + Seperator;
	S += Client.Phone + Seperator;
	S += to_string(Client.AccountBalance);
	return S;
}



int main()
{
	
	ClinetData Client;
	Client = ReadData();
	cout << "Convert Record To Line is :\n\n";
	cout << ConvertRecordToLine(Client) << endl;
	return 0;
}