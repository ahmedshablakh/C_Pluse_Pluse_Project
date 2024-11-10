#include<iostream>
#include<string>
using namespace std;

/*string ReadString()
{
	string Word;
	cout << "Please enter string \n";
	getline(cin, Word);
	return Word;
}*/
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
	return (Ch=='A'|| Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch=='U');
}


int main()
{
//	string S1 = ReadString();
	char Ch1 = ReadChar();
	if (IsVowel(Ch1))
	{
		cout << "\nYES Letter \'" << Ch1 << "\' is vowel\n";
	}
	else
		cout << "\nNO Letter \'" << Ch1 << "\' is NOT vowel\n";

	return 0;
}