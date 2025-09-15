#include <bits/stdc++.h>

using namespace std;

class person
{
    // private:
    string email_password = "abc";

protected:
    int bank_balance = 1000;

public:
    string name;
    int height;
    int weight;
    int age;

    string get_name()
    {
        return name;
    }
    void deposit_money(int amount)
    {
        if (amount < 0)
            return;

        bank_balance += amount;
    }
    // string get_email_password()
    // {
    //     return email_password;
    // }
    void login_email(string entered_pass)
    {
        if (email_password == entered_pass)
            cout << "logged in succesfylly";
        else
            cout << "please enter correct pass";
    }
};

class child : public person
{
public:
    int print_bank_balance()
    {
        return bank_balance;
    }

    // string print_pass()
    // {
    //     return email_password;
    // }
};
int main()
{

    person p1;
    p1.name = "naman";
    p1.height = 170;
    p1.weight = 70;
    p1.age = 25;
    // p1.login_email("yyy");
    // p1.email_password = "zxcv";
    // cout << p1.get_email_password() << endl;

    child c1;
    c1.age = 15;
    cout << c1.age << endl;
    cout << c1.print_bank_balance() << endl;
    // cout << c1.print_pass() << endl;
}