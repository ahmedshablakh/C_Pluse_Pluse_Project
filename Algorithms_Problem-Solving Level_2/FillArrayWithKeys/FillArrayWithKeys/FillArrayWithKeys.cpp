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
	int Number;
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


void GenerateKeys(string Array[100],int ArrLenth)
{
	for (int i = 0; i < ArrLenth; i++)
	{
		cout << "Array [" << i << "] : ";
		cout << Array[i] << endl;
	}
}
void FillArrayWirhKeys(string array[100], int ArrLenth)
{
	for (int i = 0;i < ArrLenth;i++)
	{
		array[i] = GenerateKey();
	}
}
int main()
{
	string array[100];
	int	Arrlenth =0;
	
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));
	
	Arrlenth =PositiveNumber("Please enter Keys Number ?");
	FillArrayWirhKeys(array, Arrlenth);
	GenerateKeys(array, Arrlenth);


	return 0;
}