#include<iostream>
using namespace std;
int main()
{
    short num[2];
    short Operation;
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
    cin >> Operation;
    switch (Operation)
    {
        case 1:
            cout << num[0] + num[1] << endl;
        break;
        case 2:
            cout << num[0] - num[1] << endl;
            break;
        case 3:
            cout << num[0] / num[1] << endl;
            break;
        case 4:
            cout << num[0] * num[1] << endl;
            break;
    default:
        cout << "Error..." << endl;
        break;
    }
    main();
    return 0;


}