
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
const string ClientDataFile = "Client.txt";
vector <string> FullvClientdataLine(string ClientDataFile)
{
	fstream MyData;
	string Line;
	vector <string> vClientdataLine;
	MyData.open(ClientDataFile, ios::in);
	if (MyData.is_open())
	{
		while (getline(MyData, Line))
		{
			vClientdataLine.push_back(Line);
		}
	}
	return vClientdataLine;
}
vector <string> SplitString(string S1, string Seperator = "#//#")
{
	vector <string> SplitString1;
	string sWord;
	short pos;
	while ((pos = S1.find(Seperator)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			SplitString1.push_back(sWord);
			S1.erase(0, pos + Seperator.length());
		}
	}
	if (S1 != "")
	{
		SplitString1.push_back(S1);
	}
	return SplitString1;
}



void PrintClientRecord(vector <string> vdata)
{ 
	cout << "| " << setw(15) << left << vdata[0];
	cout << "| " << setw(10) << left << vdata[1];
	cout << "| " << setw(40) << left << vdata[2];
	cout << "| " << setw(12) << left << vdata[3];
	cout << "| " << setw(12) << left << vdata[4];
}
void PrintAllClientsData(vector <string> FullvClientdataLine1)
{
	cout << "\n\t\t\t\t\tClient List (" << FullvClientdataLine1.size() << ") Client(s).";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	
	for (string Client : FullvClientdataLine1)
	{

		PrintClientRecord(SplitString(Client));
;         cout << endl;
	}
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}

int main()
{
	vector <string> FullvClientdataLine1 = FullvClientdataLine(ClientDataFile);
	PrintAllClientsData(FullvClientdataLine1);

	return 0;
}