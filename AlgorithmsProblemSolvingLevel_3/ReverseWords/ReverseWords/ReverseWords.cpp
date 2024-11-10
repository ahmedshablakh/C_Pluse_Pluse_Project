#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector <string> SpiltString(string S1,string dilm)
{
	vector <string> vstring;
	int pos = 0;
	string sWord;
	while ((pos = S1.find(dilm)) != std::string::npos)
	{
		sWord = S1.substr(0,pos);
		if (sWord != " ")
		{
			vstring.push_back(sWord);
			S1.erase(0, pos + dilm.length());

		}
	}
	if (sWord != " ")
	{
		sWord = S1.substr(0, pos);
		vstring.push_back(sWord);
	}
	return vstring;
}
string ReverseWords(string S1, string dilm)
{
	string S2="";
	vector <string> vString;
	vString = SpiltString(S1, " ");
	vector <string>::iterator iter=vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S2 += *iter + dilm;
	}
	return S2.substr(0, S2.length() - dilm.length());
}
int main()
{
	string S1 = "ahmad ahablakh a,l aarab";
	cout<< ReverseWords(S1, " ");
	return 0;
}