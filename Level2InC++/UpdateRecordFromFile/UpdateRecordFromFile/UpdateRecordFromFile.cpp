#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
void LoadDataFromFileToVector(string FileName ,vector <string>& vDataFile)
{
	fstream FileData;
	FileData.open(FileName, ios::in);
	if(FileData.is_open())
	{
		string Line;

		while (getline(FileData, Line))
		{
			vDataFile.push_back(Line);
		}
		FileData.close();
	}
}
void PrintDataFromFile(string FileName)
{
	fstream FileData;
	FileData.open(FileName, ios::in);
	if (FileData.is_open())
	{
		string Line;
		while (getline(FileData, Line))
		{
			cout << Line << endl;
		}
		FileData.close();
	}
}
void SaveVectorToFile(string FileName, vector <string>& vDataFile)
{
	fstream FileData;
	FileData.open(FileName, ios::out);
	if (FileData.is_open())
	{
		for (string& Line : vDataFile)
		{
				FileData << Line << endl;
		}
		FileData.close();
	}
	
}
void UpdateRecordFromFile(string FileName, string dRecord, string iRecord)
{
	vector <string> vDataFile;
	LoadDataFromFileToVector(FileName, vDataFile);
	for (string& Line : vDataFile)
	{
		if (Line == dRecord)
		{
			Line = iRecord;

		}
	}
	SaveVectorToFile(FileName, vDataFile);
}
int main()
{
	
	cout << "--------- Befor Update ---------\n\n";
	PrintDataFromFile("Data.txt");

	UpdateRecordFromFile("Data.txt", "ahmad", "Azam");
	cout << "--------- After Update ---------\n\n";
	PrintDataFromFile("Data.txt");
	return 0;
}