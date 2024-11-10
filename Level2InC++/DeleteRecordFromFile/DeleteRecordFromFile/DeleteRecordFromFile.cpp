#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

void LoadDataFromVector(string NameFile, vector <string>& vDataFile)
{

	fstream Myfile;
	Myfile.open(NameFile, ios::in);
	string Line;
	if (Myfile.is_open())
	{
		
		while (getline(Myfile, Line))
		{
			vDataFile.push_back(Line);
		}
		Myfile.close();
	}
}
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
			if (Line != "")
				cout << Line << endl;
		}
		Myfile.close();
	}
}
void DeletRecordFromFile(string FileName, string Record)
{
	vector <string> vDataFile;
	LoadDataFromVector(FileName, vDataFile);
	for (string &Line : vDataFile)
	{
		if (Line == Record)
		{
			Line = "";

		}

	}
	SaveDataFromVectorToFile(FileName, vDataFile);


}
int main()
{
	cout << "-------Befor------------\n";
	PrintDataFile("Data.txt");
	DeletRecordFromFile("Data.txt", "Ali");

	cout << "-------After------------\n";
	PrintDataFile("Data.txt");

	
	return 0;

}