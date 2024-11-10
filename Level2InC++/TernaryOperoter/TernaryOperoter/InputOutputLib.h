#pragma once
#include<iostream>
using namespace std;



namespace InputLib
{
	int ReadNumber()
	{
		int Number;
		cout << "Please enter your Number .?" << endl;
		cin >> Number;
		return Number;
	}/*
	string  CheckNumber(int ReadNumber())
	{
		string result =  (Number > 0) ? cout << "Positif " : cout << "The Number Necatif..";
		return result;

	}
	*/
}
