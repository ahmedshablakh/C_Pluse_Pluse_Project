#include<iostream>
#include<string>
using namespace std;


char ReadChar()
{
	char ch;
	cout << "Please enter Character? \n";
	cin >> ch;
	return ch;
}
char InvertCkaracter(char Ch)
{
	return isupper(Ch) ? tolower(Ch) : toupper(Ch);
}

int main()
{
	char S1 = ReadChar();
	cout << "Char after inverting case : \n ";
	cout << endl << InvertCkaracter(S1) << endl;

	return 0;
}