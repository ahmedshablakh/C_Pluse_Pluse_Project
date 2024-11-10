#include<iostream>

int main()
{
	for (int i = 1;i <= 10;i++) 
	{
		std::cout << "the " << i << std::endl;
		for (int j = 1;j <= 10;j++) 
		{
			std::cout << i << " * " << j << " = " << i*j << std::endl;
		}
		std::cout << "----------------------------------------------- " << std::endl << std::endl;
	}
}