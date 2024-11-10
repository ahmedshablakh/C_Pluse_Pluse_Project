#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
const string ClientsFileName = "Clients.txt";
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
vector <string> SplitString1(string S1, string delimiter)
{
	vector <string> SplitString1;
	string sWord;
	short pos;
	while ((pos = S1.find(delimiter)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			SplitString1.push_back(sWord);
			S1.erase(0, pos + delimiter.length());
		}
	}
	if (S1 != "")
	{
		SplitString1.push_back(S1);
	}
	return SplitString1;
}
sClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
	sClient Client;
	vector <string> VclientData;
	VclientData = SplitString1(Line, Seperator);

	Client.AccountNumber = VclientData[0];
	Client.PinCode = VclientData[1];
	Client.Name = VclientData[2];
	Client.Phone = VclientData[3];
	Client.AccountBalance = stod(VclientData[4]);
	return Client;
}
vector < sClient> LoadLientsDataFromFile(string FileName)
{
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		sClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}
void DeletClientCard(vector <string> VclientData ,sClient Client)
{
	vector <string> VclientData;
	 Client.AccountNumber
	
}
bool FindClientByAccountNumber(string Accountnumber, sClient& Client)
{
	vector <sClient> vClient = LoadLientsDataFromFile(ClientsFileName);
	for (sClient C : vClient)
	{
		if (C.AccountNumber == Accountnumber)
		{

			Client = C;
			return true;
		}

	}
	return false;
}
string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease enter Account number .? ";
	cin >> AccountNumber;
	return AccountNumber;
}
int main()
{
	sClient Client;
	string AccountNumber = ReadClientAccountNumber();
	if (FindClientByAccountNumber(AccountNumber, Client))
	{
		DeletClientCard(Client);
		cout << "\nClient with Account number : (" << AccountNumber << ") is Deleted!";
	}
	else
	{
		cout << "\nClient with Account number : (" << AccountNumber << ") is Not Found!";
	}


	return 0;
}
