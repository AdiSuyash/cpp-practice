// Break & Continue Statements

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
    {

        if (i == 5)
        {
            break; // 'break' is used to STOP the Control Flow of the Loop
        }
        cout << i << endl;
    }

    for (int i = 0; i = < 5; i++)
    {
        if (i == 3)
        {
            continue; // 'continue' is used to SKIP the Specified Iteration only ( i.e here is 3 )
        }
    }

    return 0;
}