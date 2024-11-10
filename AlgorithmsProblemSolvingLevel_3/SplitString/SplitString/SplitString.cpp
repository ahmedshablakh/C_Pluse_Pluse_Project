#include<iostream>
#include<string>
#include<vector>
using namespace std;
string ReadString()
{
	cout << "Please enter string \n";
	string S1;
	getline(cin, S1);
	return S1;
}
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
int main()
{
	
	string S1 = ReadString();
	vector <string> SplitString = SplitString1(S1, " ");
	cout << "\nTokens = " << SplitString.size() << endl;
	for (string& w : SplitString)
	{
		cout << w << endl;

	}

	return 0;
}
