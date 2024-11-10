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
char InvertCkaracter(char Ch)
{
	return isupper(Ch) ? tolower(Ch) : toupper(Ch);
}
string InvertAllLetter(string Word)
{
	
	for (int i = 0;i < Word.length();i++)
	{
		Word[i] = InvertCkaracter(Word[i]);
	}
	return Word;
}
int main()
{
	string S1 = ReadString();
	cout << "Letter after inverting case : \n ";
	cout << endl << InvertAllLetter(S1) << endl;

	return 0;
}