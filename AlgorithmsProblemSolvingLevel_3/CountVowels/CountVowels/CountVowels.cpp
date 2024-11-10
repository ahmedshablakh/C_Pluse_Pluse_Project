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


bool  IsVowel(char Ch)
{
	Ch = toupper(Ch);
	return (Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U');
}
short CountVowels(string S1)
{
	short Count = 0;
	for (int i = 0;i < S1.length();i++)
	{
		if (IsVowel(S1[i]))
			Count++;
	}
	return Count;
}


int main()
{
	string S1 = ReadString();
	//char Ch1 = ReadChar();
	cout << "\nNumber of vowels is : " << CountVowels(S1) << endl;

	return 0;
}