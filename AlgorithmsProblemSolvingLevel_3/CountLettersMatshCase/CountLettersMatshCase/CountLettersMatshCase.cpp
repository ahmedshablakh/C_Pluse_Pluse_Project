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
char InvertLetter(char Ch)
{
	return isupper(Ch) ? tolower(Ch) : toupper(Ch);
}
char ReadChar()
{
	char Ch;
	cout << "Please enter Character \n";
	cin >> Ch;
	return Ch;
}


short  CountLetter(string Word, char Ch,bool MatchCase = true)
{
	int count = 0;
	for (int i = 0;i < Word.length();i++)
	{
		if (MatchCase)
		{
			if (Word[i] == Ch)
				count++;
		}
		else
		{
			if(tolower(Word[i]) == tolower(Ch))
				count++;
		}
	}
	return count;
}


int main()
{
	string S1 = ReadString();
	char Ch1 = ReadChar();
	cout << " Count \'" << Ch1 << "\' Letters = " << CountLetter(S1, Ch1) << endl;
	cout << " Count \'" << Ch1 << "\' Letters = ";
	cout << " Or Count \'" << InvertLetter(Ch1) << "\' Letters = " << CountLetter(S1, Ch1,0) << endl;

	return 0;
}