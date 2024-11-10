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
string LowerFirstLetterOfEachWord(string Word)
{

	bool isFirstLetter = true;
	for (int i = 0;i <= Word.length();i++)
	{

		if (Word[i] != ' ' && isFirstLetter)
			Word[i] = tolower(Word[i]);

		isFirstLetter = (Word[i] == ' ' ? true : false);
	}

	return Word;
}
int main()
{
	cout << endl << LowerFirstLetterOfEachWord(ReadString());
	return 0;
}