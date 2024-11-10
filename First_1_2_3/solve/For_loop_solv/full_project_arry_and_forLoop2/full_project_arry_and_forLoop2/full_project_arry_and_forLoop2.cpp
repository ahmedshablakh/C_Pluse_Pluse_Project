#include<iostream>

void ReadNumber(int num[100], int length)
{
	for (int i = 0;i <= length-1;i++) 
	{
		std::cout << "Please enter the number (" << i+1 << ")..?" <<std::endl;
		std::cin >> num[i];
	}
}
void PrintNumber(int num[100], int length)
{
	for (int i = 0;i <= length - 1;i++)
	{
		std::cout << "		The number (" << i + 1 << ") = " << num[i] << std::endl;
		
	}
}

int SumNumber(int num[100], int length)
{
	int sum = 0, i;
	for (i = 0;i <= length - 1;i++)
	{
		sum += num[i];

	}
	return sum;
}
float CalculateArrayAverage(int num[100], int Length)
{
	return  (float)SumNumber(num, Length) / Length;
}
int main()
{

	std::cout << "Please enter the lenght For a input number ..?" << std::endl;
	int length;
	std::cin >> length;
	int num[100];
	ReadNumber(num, length);
	PrintNumber(num, length);
	std::cout << "The Number Sum is : = " << SumNumber(num, length) << std::endl;
	std::cout << "The Number Avg is : = " << CalculateArrayAverage(num,length) << std::endl;



}