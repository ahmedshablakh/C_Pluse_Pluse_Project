#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void PrintDataFile(string FileSurc)
{
	fstream MyData;
	string Line;
	MyData.open("MyFile.txt", ios::in);
	if (MyData.is_open())
	{
		while (getline(MyData, Line))
		{
			cout << Line << endl;
		}
	}
}
int main()
{
	
	fstream MyData;
	// file Write 
	MyData.open("MyFile.txt", ios::out );
	if (MyData.is_open())
	{
		MyData << "Hi, this is first line.\n";
		MyData << "Hi, this is second line.\n";
		MyData << "Hi, this is thrid line.\n";
		MyData.close();
	}
	// file append 
	MyData.open("MyFile.txt", ios::out | ios::app);
	if (MyData.is_open())
	{
		MyData << "Hi, this is first line.\n";
		MyData << "Hi, this is second line.\n";
		MyData << "Hi, this is thrid line.\n";
		MyData << "Hi, this is first line.\n";
		MyData << "Hi, this is second line.\n";
		MyData << "Hi, this is thrid line.\n";
		MyData << "Hi, this is first line.\n";
		MyData << "Hi, this is second line.\n";
		MyData << "Hi, this is thrid line.\n";
		MyData.close();
	}
	
	
	PrintDataFile("Myfile.txt");
	return 0;
}