#include<iostream>
#include<cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
int PositiveNumber(string Massege)
{
	int Number ;
	do
	{
		cout << Massege << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case SamallLetter:
		return char(RandomNumber(97, 122));
		break;
	case CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;
	case Digit:
		return char(RandomNumber(48, 57));
		break;
	}
}
string GenerateWord(enCharType CharType, short Length) 
{ 
	string Word; 
	for (int i = 1; i <= Length; i++) 
	{ 
		Word = Word + GetRandomCharacter(CharType);
	} 
	return Word;
}
string  GenerateKey() 
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
	return Key; 
}


void GenerateKeys(short NumberOfKeys)
{ 
	for (int i = 1; i <= NumberOfKeys; i++) 
	{ 
		cout << "Key [" << i << "] : ";
		cout << GenerateKey() << endl;
	} 
}
int main()
{
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));
	GenerateKeys(PositiveNumber("Please enter Keys Number ?"));
		
	return 0;
}