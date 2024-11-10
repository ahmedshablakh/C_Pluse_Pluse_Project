#include<iostream>
using namespace std;

void ReadGrads(float Grades[3])
{
	cout << "Please enter Grade1..." << endl;
	cin >> Grades[0];
	cout << "Please enter Grade1..." << endl;
	cin >> Grades[1];
	cout << "Please enter Grade1..." << endl;
	cin >> Grades[2];
}
float ClaculateAverageGrades(float Grades[3])
{
	return  (Grades[0] + Grades[1] + Grades[2]) / 3;
}
int main()
{
	float Grades[3];
	ReadGrads(Grades);
	cout << "The Avarge of  Grades is : " << ClaculateAverageGrades(Grades) << endl;


}
