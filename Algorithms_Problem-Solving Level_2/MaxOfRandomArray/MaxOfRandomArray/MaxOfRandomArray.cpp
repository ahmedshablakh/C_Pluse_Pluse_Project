#include<iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;

}
int RandomNumber(int From, int To)
{
    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}
void FillArrayWithRandomNUmbers(int Array[100], int& arrlength)
{
    arrlength = ReadPositiveNumber("Please enter length array?");
    for (int i = 0;i < arrlength;i++)
    {
        Array[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Arry[100], int arrLength)
{
    cout << "Array Elemenet : ";
    for (int i = 0; i < arrLength;i++)
        cout << Arry[i] << " ";
    cout << endl;

}
int MaxNumberInArray(int Array[100], int ArrLength)
{
    int Max = 0;
    for (int i = 0;i < ArrLength;i++)
    {
        if (Array[i] > Max)
            Max = Array[i];

    }
    return Max;
}
int main()
{
    srand((unsigned)time(NULL));
    int Array[100], ArrLength;
    FillArrayWithRandomNUmbers(Array, ArrLength);
    PrintArray(Array, ArrLength);
    cout << "\nMax Number is : ";
    cout << MaxNumberInArray(Array, ArrLength) << endl;
}