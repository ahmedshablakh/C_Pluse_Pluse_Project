#include<iostream>
#include<string>
using namespace std;
string RemovePunctuation(string S1)
{
	string S2;
	for (int i = 0;i < S1.length();i++)
	{
		if (!ispunct(S1[i]))
		{
			S2+=S1[i];
		}
	}
	return S2;
}
int main()
{
	string S1 = "Ahmd shablakhj, abn: Al'd , is'";
	cout << S1 << endl;
	cout << RemovePunctuation(S1);

	return 0;
}