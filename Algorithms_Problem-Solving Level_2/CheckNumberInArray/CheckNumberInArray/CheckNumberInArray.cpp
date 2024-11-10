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
void FillArrayWithRandomNumbers(int Array[100], int& arrlength)
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
short FindNumberPosition(int Array[100], int Arrlength, int Number)
{
    for (int i = 0;i < Arrlength;i++)
    {
        if (Array[i] == Number)
            return i;
    }
    return -1;
}
bool IsNumberInArray(int Array[100], int Arrlength, int Number)
{
    return FindNumberPosition(Array, Arrlength, Number) != -1;
}
int main()
{
    srand((unsigned)time(NULL));
    int Array[100], ArrLength, Number;
    FillArrayWithRandomNumbers(Array, ArrLength);
    cout << "Orjinal Array  \n ";
    PrintArray(Array, ArrLength);
    Number = ReadPositiveNumber("Please enter Check Number..?");
    
    if (!IsNumberInArray(Array, ArrLength, Number))
    {
        cout << "No, The number is not found :-(\n";
    }
    else
    {
        cout << "Yes it is found :-)\n";
    }

}