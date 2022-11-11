// Control Structures

/* There are three types of Control Structures:

1. Sequence Control Structure -> One by one
2. Selection Control Structure -> Based on conditions
3. Loop Control Structure -> Iterative */

/* There are three types of conditions :
1. If-Else
2. If-Else Ladder
3. Switch Case */

#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "Program To Show Eligibility for Voting";
    cout << endl;

    int age;
    cout << "Enter Your Age " << endl;
    cin >> age;

    if (age > 18)
    {
        cout << "Eligible for voting with a Voter ID card!" << endl;
    }
    else if (age == 18)
    {
        cout << " " << endl;
    }

    else if (age < 1)
    {
        cout << "You are not at least 1 year of age or haven't yet born";
    }
    else
    {
        cout << "Not eligible to vote yet!" << endl;
    }

    // Switch Case ( Study More !!)
    switch (age)
    {
    case 22:
        /* code */
        cout << "Eligible or Apply for Voter ID!";
        break;

    default:

        break;
    }

    return 0;
}
