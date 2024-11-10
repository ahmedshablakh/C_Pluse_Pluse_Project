#include<iostream>
#include<string>
#include<vector>
using namespace std;

string LowerAllString(string S1)
{
	for (int i = 0;i < S1.length();i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}
string ReplaceWordInStringUsingBuilrInFunction(string S1, string StringToReolace, string sReblace)
{
	int pos = 0;
	while ((pos = S1.find(StringToReolace)) != std::string::npos)
	{
			S1 = S1.replace(pos, StringToReolace.length(), sReblace);
		    pos = S1.find(StringToReolace);
	}
	return S1;
}
string JoinString(vector <string> vString ,string delimeter)
{
	string S1;
	for (string item : vString)
	{
		S1 += item + delimeter;
	}
	return S1.substr(0, S1.length() - delimeter.length());
}
vector <string> SplitString(string S1, string delimeter)
{
	vector <string> vString;
	int pos = 0;
	string sWord;
	while ((pos = S1.find(delimeter)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != " ")
		{
			vString.push_back(sWord);
			S1.erase(0, pos + delimeter.length());
		}

	}
	if (sWord != " ")
	{
		sWord = S1.substr(0, pos);
		vString.push_back(sWord);
	}
	return vString;
}
string ReplaceWordInStringUsingSplit(string S1, string StringToReolace, string sReblace,bool MatchCase =true)
{
	vector <string> vString;

	vString = SplitString(S1, " ");
	for (string& word : vString)
	{
		if (MatchCase)
		{
			if (word == StringToReolace)
				word = sReblace;
		}
		else
		{
			if (LowerAllString(word) == LowerAllString(StringToReolace))
			{
				word = sReblace;
			}
		}
	}

	return JoinString(vString, " ");
}
int main()
{

	string S1 = "AHMAD SHABLAKH , HASSAN SHABLAKH , HUSSAM SHABLAKH ";
	string StringToReolace = "shablakh";
	string sReplace = "ALARAB";
	cout << "Befor Relace : \n";
	cout << S1 << endl;
	cout << "\n\nAfter Relace With  BuilrInFunction : \n";
	cout << ReplaceWordInStringUsingBuilrInFunction(S1, StringToReolace, sReplace) << endl;

	cout << "\n\n       Replace Word In String Using Split : \n\n";
	cout << ReplaceWordInStringUsingSplit(S1, StringToReolace, sReplace, 0) << endl;
	return 0;
}