#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct sClinet
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	float AccountBalance;
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

sClinet FillsClint(string stLine)
{
	sClinet cl;
	vector <string> vData;
	vData = SplitString1(stLine, "#//#");
	cl.AccountNumber = vData[0];
	cl.PinCode = vData[1];
	cl.Name = vData[2];
	cl.Phone = vData[3];
	cl.AccountBalance = stod(vData[4]);
	return cl;
}
void PrintsClinet(sClinet Cdata)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Cdata.AccountNumber;
	cout << "\nPin Code     : " << Cdata.PinCode;
	cout << "\nName         : " << Cdata.Name;
	cout << "\nPhone        : " << Cdata.Phone;
	cout << "\nAccount Balance: " << Cdata.AccountBalance;
}
int main()
{

	string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
	cout << stLine << endl;
	sClinet Cdata = FillsClint(stLine);
	PrintsClinet(Cdata);

	return 0;
}