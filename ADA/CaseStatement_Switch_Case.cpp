// Algorithm of Case Statement-
// CASE (day)
//     1 : Print "Monday"
//     2 : Print "Tuesday"
//     3 : Print "Wednesday"
//     4 : Print "Thursday"
//     5 : Print "Friday"
//     6 : Print "Saturday"
//     7 : Print "Sunday"
//     ELSE : Print "Invalid Day"
// END CASE

// CPP programe for the case statement is known as SWITCH-CASE
#include <iostream>
using namespace std;

int main(){
    int day;

    cout << "Enter day number (1 to 7): ";
    cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid Day";
    }
    return 0;
}
