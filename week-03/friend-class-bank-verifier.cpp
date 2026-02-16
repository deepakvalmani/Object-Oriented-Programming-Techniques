/*
 * Program: Friend Class for Bank Account Verification
 * 
 * Description:
 * This program demonstrates friend class for bank account verification.
 * 
 * Key Concepts Covered:
 * - Friend Class
 * - Encapsulation
 * - Access Control
 * - Multiple Constructors
 *
 * Author: IBA Karachi - OOP Course
 * Instructor: Sir Behraj Khan
 */

#include <iostream>
using namespace std;

class Account
{

    // Private members - accessible only within class
private:
    int account_no;
    double account_bal;
    int security_code;
    string name;

    void display()
    {

        if (verification())
        {
            cout << "Name: " << name << endl;
            cout << "\tAccount No: " << account_no << endl;
            cout << "\tAccount Balance: " << account_bal << endl;
        }
        else
        {

            cout << "Can not display info please Enter Correct Security Code." << endl;
        }
    }

    bool verification()
    {
        int pin;
        cout << "Account Holder: " << name << endl;
        cout << "Enter Security Pin: ";
        cin >> pin;
        return pin == security_code;
    }


    // Public members - accessible from outside class
public:
    Account()
    {
        account_no = 0101;
        account_bal = 5000;
        security_code = 1234;
        name = "Deepak Raj";
    }

    Account(string n, int acc_no, double bal, int pin)
    {
        name = n;
        account_no = acc_no;
        account_bal = bal;
        security_code = pin;
    }

    friend class Verifier;
};

class Verifier
{

    // Public members - accessible from outside class
public:
    void Display(Account &a)
    {
        a.display();
    }
};


// ===== Main Program =====
int main()
{
    Account a;
    Verifier v;
    v.Display(a);

    return 0;
}