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

enum enWhatToCount{ SmallLetter =0,CapitalLettre=1,AllLetter=2, SymbolLetter =3,DigitLetter=4};
int  CountLetters(string Word)
{
	int count = 0;
	for (int i = 0;i < Word.length();i++)
	{
		if (islower(Word[i]))
			count++;
	}
	return count;
}
int  CountLetterofCapital(string Word)
{
	int count = 0;
	for (int i = 0;i < Word.length();i++)
	{
		if (isupper(Word[i]))
			count++;
	}
	return count;
}

short CountLetters(string Word, enWhatToCount WhatToCount)
{
	int count = 0;
	for (int i = 0;i < Word.length();i++)
	{
		if (WhatToCount == enWhatToCount::AllLetter && isupper(Word[i]))
		{
			return Word.length();
		}
		if (WhatToCount == enWhatToCount::SmallLetter && islower(Word[i]))
		{
			count++;
		}
		if (WhatToCount == enWhatToCount::CapitalLettre && isupper(Word[i]))
		{
			count++;
		}
		if (WhatToCount == enWhatToCount::SymbolLetter && ispunct(Word[i]))
		{
			count++;
		}
		if (WhatToCount == enWhatToCount::DigitLetter && isdigit(Word[i]))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	string S1 = ReadString();
	cout << "String Length is = " << CountLetters(S1, AllLetter) << endl;

	cout << "Capital Letters Count = " << CountLetters(S1, CapitalLettre) << endl;
	cout << "Small Letters Count = " << CountLetters(S1, SmallLetter) << endl;
	cout << "Digit Letters Count = " << CountLetters(S1, DigitLetter) << endl;
	cout << "Symbol Letters Count = " << CountLetters(S1, SymbolLetter) << endl;
	return 0;
}