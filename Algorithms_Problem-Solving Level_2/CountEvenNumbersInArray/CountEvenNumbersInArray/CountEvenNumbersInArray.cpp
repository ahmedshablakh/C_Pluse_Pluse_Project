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
void AddArrayElement(int Number, int Array[100], int& ArrLengh)
{
    ArrLengh++;
    Array[ArrLengh - 1] = Number;
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
int CountEvenNumberInArray(int Arry[100], int arrLength)
{
    int count = 0;
    for (int i = 0;i < arrLength;i++)
    {
        if (Arry[i] % 2 == 0)
            count++;
    }
    return count;
}
int main()
{
    srand((unsigned)time(NULL));
    int Array[100], arrlength, Array2[100], arr2length;
    FillArrayWithRandomNUmbers(Array, arrlength);
    PrintArray(Array, arrlength);
    cout << "\n Even Number Count is : " << CountEvenNumberInArray(Array, arrlength) << endl;
}