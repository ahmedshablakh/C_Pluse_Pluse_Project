#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
/*
void ReadDataFromVector(string NameFile, vector <string>& vDataFile)
{

	fstream Myfile;
	Myfile.open(NameFile, ios::in);
	if (Myfile.is_open())
	{
		string Line;
		while (getline(Myfile, Line))
		{
			vDataFile.push_back(Line);
		}
		Myfile.close();
	}
}
*/
void SaveDataFromVectorToFile(string FileName, vector <string> vDataFile)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out);
	if (MyFile.is_open())
	{
		for (string& Line : vDataFile)
		{
			MyFile << Line << endl;
		}
		MyFile.close();
	}

}
void PrintDataFile(string FileName)
{
	fstream Myfile;
	Myfile.open(FileName, ios::in);
	if (Myfile.is_open())
	{
		string Line;
		while (getline(Myfile, Line))
		{
			cout << Line << endl;
		}
		Myfile.close();
	}
}
int main()
{
	vector <string> vDataFile{"Ahmad ","Ali ", "Ibrahim ", "Khaled ","Idres"};
	
	//ReadDataFromVector("Data.txt", vDataFile);
	/*
	for (string& Line : vDataFile)
	{
		cout << Line << endl;
	}
	*/
	SaveDataFromVectorToFile("Data.txt", vDataFile);
	
	PrintDataFile("Data.txt");
	return 0;
	
}