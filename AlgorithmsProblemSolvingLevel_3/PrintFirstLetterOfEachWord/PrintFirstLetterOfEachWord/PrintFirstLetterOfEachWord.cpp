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
void PrintFirstLetterOfEachWord(string Word)
{
	bool isFirstLetter = true;
	for (int i = 0;i <= Word.length();i++)
	{
	     if(Word[i]!=' ' && isFirstLetter)
			 cout << Word[i] << endl;
		 isFirstLetter = (Word[i] == ' ' ? true : false);
	}
}
int main()
{
	PrintFirstLetterOfEachWord(ReadString());
	return 0;
}