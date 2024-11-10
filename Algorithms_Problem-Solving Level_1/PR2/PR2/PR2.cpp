#include<iostream> 
#include<string>

using namespace std;
string ReadName()
{
	string name;
	getline(cin, name);
	return name;

}
void PrintName(string name)
{
	cout << " Your Name is:  " << name << endl;
}
int main()
{
	PrintName(ReadName());
	return 0;
}