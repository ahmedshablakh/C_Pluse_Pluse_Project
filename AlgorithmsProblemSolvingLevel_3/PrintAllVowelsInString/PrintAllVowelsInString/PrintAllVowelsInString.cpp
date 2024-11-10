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
void PrintAllVowelInString(string S1)
{
	cout << "\n Vowels in steing are : ";

	for (int i = 0;i < S1.length();i++)
	{
		if (IsVowel(S1[i]))
			cout << S1[i]<<"  ";
	}

}


int main()
{
	string S1 = ReadString();
	//char Ch1 = ReadChar();
	 PrintAllVowelInString(S1);

	return 0;
}