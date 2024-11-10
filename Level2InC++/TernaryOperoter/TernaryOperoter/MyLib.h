#pragma once

#include<iostream>
#include"InputLib.h";
using namespace std; 
using namespace InputLib;
namespace MyLib
{
	void PrintValue()
	{
		
		cout << "This Number is : " << ReadNumber() << endl;
	}
}