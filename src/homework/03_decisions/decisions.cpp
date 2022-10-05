#include "decisions.h"
using std::cin;
using std::cout;

string get_letter_grade_using_if(int grade)
{
    string usergrade;

        if (grade <= 100 && grade >= 90)
        usergrade = "A";

        else if (grade <= 89 && grade >= 80)
        usergrade = "B";

        else if (grade <= 79 && grade >= 70)
        usergrade = "C";

        else if (grade <= 69 && grade >= 60)
        usergrade = "D";

        else if (grade <= 59 && grade >= 0)
        usergrade = "F";

        else
        usergrade = "Your number was out of range.";

    return usergrade;
}

string get_letter_grade_using_switch(int grade)
{
    string usergrade;

    switch (grade)
    {
        case 90 ... 100:
            usergrade = "A";
            break;
        
        case 80 ... 89:
            usergrade = "B";
            break;

        case 70 ... 79:
            usergrade = "C";
            break;

        case 60 ... 69:
            usergrade = "D";
            break;

        case 0 ... 59:
            usergrade = "F";
            break;

        default:
            usergrade = "Your number was out of range.";

    }
    return usergrade;
}