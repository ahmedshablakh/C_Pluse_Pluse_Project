#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please enter string..?\n";
	getline(cin, S1);
	return S1;
}
string TrimLeft(string S1)
{
	
	for (int i = 0; i < S1.length();i++)
	{
		if (S1[i]!= ' ')
		{
			
			return S1.substr(i, S1.length() -i);
		}
	}
}

string TrimRight(string S1)
{
	
	for (int i = S1.length(); i >= 0 ;i--)
	{
		if (S1[i] != ' ')
		{

			return S1.substr(0,i+1);
		}
	}
	return S1;
}
string Trim(string S1)
{

	return TrimLeft(TrimRight(S1));
}

int main()
{
	string S1 = "     Ahmad shablakh    ";
	cout << S1 << endl;
	cout << "Trim Left :" << TrimLeft(S1) << endl;
	cout << "Trim Right :" << TrimRight(S1) << endl;
	cout << "Trim Right :" << Trim(S1) << endl;
	return 0;
}