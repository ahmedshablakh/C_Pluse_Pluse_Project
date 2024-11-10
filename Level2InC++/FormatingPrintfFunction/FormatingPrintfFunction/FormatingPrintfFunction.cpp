#include<iostream>
#include<iomanip> //this laibrary stored std::setw
using namespace std;

int main()
{
	int Page = 1, TotalPage = 10;
	cout << "***************  print string and Integer variable   ****************" << endl << endl << endl;
	printf("the Page number is  :%d \n", Page);
	printf("your are is Page :%d of %d\n\n\n", Page , TotalPage);

	cout << "***************  With specification   ****************" << endl << endl << endl;
	printf("the number is : %0*d \n",2,Page );
	printf("the number is : %0*d \n",3, Page);
	printf("the number is : %0*d \n",4, Page);
	printf("the number is : %0*d \n",5, Page);

	int num1 = 10, num2 = 50;
	cout << "\n\n\n*****  The Resulte %d + %d = %d *******\n\n\n";
	printf("The Resulte %d + %d = %d\n", num1, num2, num1 + num2);


	cout << "\n\n\n***************  print string and Float variable   ****************" << endl << endl << endl;
	float PI = 3.14159265;
	printf("The PI Number is :%f\n", PI);
	printf("Precision Specification of %.*f \n", 1, PI);
	printf("Precision Specification of %.*f \n", 2, PI);
	printf("Precision Specification of %.*f \n", 3, PI);
	printf("Precision Specification of %.*f \n", 4, PI);
	cout << "\n\n\n***************  print string and Double variable   ****************" << endl << endl << endl;
	double D = 12.45;
	printf("The double value is %.3f \n", D);
	printf("The double value is %.4f \n", D);

	cout << "\n\n\n***************  print string and Char variable   ****************" << endl << endl << endl;
	char Name[] = "Ahmad shablakh";
	char ScoloolName[] = "Mersin";

	printf("Dear %s , How are you?\n\n", Name);
	printf("Wellcome to  %s  Universitesi\n\n\n", ScoloolName);

	char C = 's';
	printf("Setting the width of c :%*c\n", 1, C);
	printf("Setting the width of c :%*c\n", 2, C);
	printf("Setting the width of c :%*c\n", 3, C);
	printf("Setting the width of c :%*c\n", 4, C);
	printf("Setting the width of c :%*c\n", 5, C);



	cout << "\n\n\n***************  Set With Manipulator (setw)  ****************" << endl << endl << endl;

	cout << left << setw(10) << "ADI" << setw(10) << "SOYADI" << setw(10) << "TCNO" << setw(10) << endl << endl << endl;
	cout << left << setw(10) << "AHMAD" << setw(10) << "SHABLAKH" << setw(10) << "12345678911" << setw(10) << endl;
	cout << left << setw(10) << "MERT" << setw(10) << "SHABLAKH" << setw(10) << "12345678911" << setw(10) << endl;
	cout << left << setw(10) << "ALI" << setw(10) << "SHABLAKH" << setw(10) << "12345678911" << setw(10) << endl;









}