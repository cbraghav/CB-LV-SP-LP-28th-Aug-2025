#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*

    try{
        // code
        throw exception;
    } catch(){
        // code to hangle exception
     }

    */

    // try
    // {
    //     int age = 12;
    //     if (age >= 18)
    //     {
    //         cout << " you are allowed to vote";
    //     }
    //     else
    //     {
    //         throw(age);
    //     }
    // }
    // catch (int age)
    // {
    //     cout << "you are not allowed to vote";
    // }

    try
    {
        int a;
        cin >> a;
        // 1 : correct
        // 2 : invalid argument
        // 3 : out range
        // 4 -> infi : unsupproted

        if (a == 1)
        {
            cout << "ok";
        }
        else if (a == 2)
        {
            throw invalid_argument(
                "dagfdsfsdf");
        }
        else
        {
            throw 1.99;
        }
    }
    catch (invalid_argument e)
    {
        cout << "caught this exception" << e.what() << endl;
    }
    catch (double e)
    {
        cout << "caught an unsuported value" << e << endl;
    }
}