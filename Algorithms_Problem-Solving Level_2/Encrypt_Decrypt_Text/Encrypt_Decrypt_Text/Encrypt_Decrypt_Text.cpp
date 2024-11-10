#include<iostream>
#include<string>
using namespace std;

string ReadText()
{
	cout << "Please enter text" << endl;
	string Text;
	getline(cin, Text);
	return Text;
}
string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length();i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);

	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length();i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);

	}
	return Text;
}


int main()
{
	string Text = ReadText();
	string TextAfterEncryption, TextAfterDecryption;
	const short EncryptionKey = 2;
	TextAfterEncryption = EncryptText(Text, EncryptionKey);
	TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);
	cout << "\nText Before Encryption : ";
	cout << Text << endl;
	cout << "Text After Encryption  : ";
	cout << TextAfterEncryption << endl;
	cout << "Text After Decryption  : ";
	cout << TextAfterDecryption << endl;
	return 0;

}