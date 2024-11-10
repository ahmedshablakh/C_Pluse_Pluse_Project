#include<iostream>
using namespace std;

string InputPassword()
{
	string pass;
	cout << "Plase enter 3 Latter?" << endl;
	cin >> pass;
	return pass;
}

bool CheckPassword(string pass)
{
	string word = "";
	int c = 0;
	for (int i = 65;i <= 90;i++)
	{
		for (int j = 65;j <= 90;j++)
		{
			for (int x = 65;x <= 90;x++)
			{
				c++;
				
				word = word + char(i);
				word = word + char(j);
				word = word + char(x);
				cout << "Trial  [" << c << "] :  " << word << endl;

				if (pass == word)
				{
					cout << "The Password is :" << pass << endl;
					cout << "Fond After " << c << " Trila(S)" << endl;
					return 1;
				}
				word = "";

			}
		}
	}
	return 0;
}

int main()
{
	CheckPassword(InputPassword());
	return 0;
}