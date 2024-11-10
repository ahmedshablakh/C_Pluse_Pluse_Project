

#include <iostream>
using namespace std;


int main()
{
    short n1=0, n2=0, n3=0;
    cout << "Please Enter 3 Numbers " << endl;
    cin >> n1>> n2>> n3;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "The MAX " << n1 << endl;
        }
        else
        {
            cout << "The MAX " << n3 << endl;
        }
    }
    else if (n2 > n3)
  
        cout << "The MAX " << n2 << endl;
    
    else
   
        cout << "The MAX " << n3 << endl;
   
}

