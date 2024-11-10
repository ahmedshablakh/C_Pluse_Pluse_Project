#include<iostream>
using namespace std;

enum enFullMonth { Jonury = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, Nuvember = 11, December = 12 };

void showFullMonth()
{
    cout << "************************" << endl;
    cout << "       Full Month        " << endl;
    cout << "************************" << endl;
    cout << "1: Jonury" << endl;
    cout << "2: February" << endl;
    cout << "3: March" << endl;
    cout << "4: April" << endl;
    cout << "5: May" << endl;
    cout << "6: June" << endl;
    cout << "7: July" << endl;
    cout << "8: August" << endl;
    cout << "9: September" << endl;
    cout << "10: October" << endl;
    cout << "11: Nuvember" << endl;
    cout << "12: December" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of Month?" << endl;
}

enFullMonth monthRead()
{
    int c;
    enFullMonth mch;
    cin >> c;
    mch = (enFullMonth)c;
    return mch;
}
string GetMonthNamr(enFullMonth mch)
{
    switch (mch)
    {
    case 1:
        return "Jonury";
        break;
    case 2:
        return "February";
        break;
    case 3:
        return "March";
        break;
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return "June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August";
        break;
    case 9:
        return "September";
        break;
    case 10:
        return "October";
        break;
    case 11:
        return "Nuvember";
        break;
    case 12:
        return "December";
        break;
    default:
        return "Month Error...";
        break;
    }

}

int main()
{
    showFullMonth();
    cout << "The Month : " << GetMonthNamr(monthRead()) << endl;
    main();
    return 0;

}
