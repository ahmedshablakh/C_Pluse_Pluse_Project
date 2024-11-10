
#include <iostream>
using namespace std;

int main()
{
    int num[2];
    string operation;
    cout << "********************* THE Simple Calculator *******************" << endl;
    cout << "********************* nu1 num2 And Opration Type *******************" << endl;
    cout << "Please Enter Number 1 " << endl;
    cin >> num[0];
    cout << "Please Enter Number 2 " << endl;
    cin >> num[1];
    cout << "Please Chose Operation Type " << endl;
    cout << "****************************\n\n";
    cout << "(1) + \n";
    cout << "(2) - \n";
    cout << "(3) / \n";
    cout << "(4) * \n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
    cin >> operation;
    if (operation == "+")
    {
        cout << "The sum two Number is : " << num[0] + num[1] << endl;
    }
    else if (operation == "-")
    {
        cout << "The Subtract two Number is : " << num[0] - num[1] << endl;
    }
    else if (operation == "*")
    {
        cout << "The Multiplication two Number is : " << num[0] * num[1] << endl;
    }
    else if (operation == "/")
    {
        cout << "The division two Number is : " << num[0] / num[1] << endl;
    }
    else
    {
        cout << "Error.." << endl;
    }
 
    

}
