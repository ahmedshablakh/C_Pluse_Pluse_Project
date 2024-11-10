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
string LowerLetter(string Word)
{

	
	for (int i = 0;i <= Word.length();i++)
	{
		Word[i] = tolower(Word[i]);	
		
	}

	return Word;
}
string UpperLetter(string Word)
{


	for (int i = 0;i <= Word.length();i++)
	{
		Word[i] = toupper(Word[i]);

	}

	return Word;
}
int main()
{
	string S1 = ReadString();
	cout << "LowerLetter \n ";
	cout << endl << LowerLetter(S1) << endl;
	cout << "UpperLetter \n ";
	cout << endl << UpperLetter(S1) << endl;
	return 0;
}