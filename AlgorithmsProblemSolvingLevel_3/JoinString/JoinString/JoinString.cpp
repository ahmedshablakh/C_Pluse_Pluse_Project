#include<iostream>
#include<string>
#include<vector>
using namespace std;
string JoinString(vector <string> vString, string dilemter)
{
	string Full;
	for (string fst : vString)
	{
		Full += fst + dilemter;
	}
	return Full.substr(0, Full.length()- dilemter.length());
}
string JoinString(string Arry[],short length , string dilemter)
{
	string Full;
	for (int i =0;i< length;i++)
	{
		Full += Arry[i] + dilemter;
	}
	return Full.substr(0, Full.length() - dilemter.length());
}
int main()
{
	string Arry[] = { "Ahmad","Hassan","Shablakh" };
	vector <string> vString = { "Ahmad","Hassan","Shablakh" };
	cout << "\n\n Vector After Joning : \n\n";
	cout << "Full name is : " << JoinString(vString, " -> ") << endl;
	cout << "\n\n Array After Joning : \n\n";
	cout << "Full name is : " << JoinString(Arry, 3," -> ") << endl;
	return 0;
}