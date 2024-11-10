#include <iostream>
using namespace std;

int powerNumber(int num, int power)
{
    int sum = 1;
        for (int i = 1;i <= power; i++)
        {
            sum = sum * num;
        }
        return sum;
}

int main()
{
    cout << "Please enter number ..?" << endl;
    int num, power;
    cin >> num;
    cout << "Please enter Power..?" << endl;
    cin >> power;
    cout << "The " << num << " ^ " << power << " is : " << powerNumber(num, power) << endl;
    

}


