#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string Word;
	cout << "Please enter string \n";
	getline(cin, Word);
	return Word;
}
char ReadChar()
{
	char Ch;
	cout << "Please enter Character \n";
	cin >> Ch;
	return Ch;
}


short  CountLetter(string Word,char Ch)
{
	int count = 0;
	for (int i = 0;i < Word.length();i++)
	{
		if (Word[i]== Ch)
			count++;
	}
	return count;
}


int main()
{
	string S1 = ReadString();
	short Ch1 = ReadChar();
	cout << " Count \'"<< (char)Ch1 <<"\' Letters = \n" << CountLetter(S1, Ch1) << endl;
	return 0;
}