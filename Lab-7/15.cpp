/*....15....All the banks operating in India are controlled by RBI. RBI has set well-defined
guidelines (e.g., minimum interest rate, minimum balance allowed, maximum
withdrawal limit, etc.), which all banks must follow. For example, suppose RBI has
set the minimum interest rate applicable to a saving bank account to be 4% annually;
however, banks are free to use a 4% interest rate or to set any rates above it.
Write a program to implement bank functionality in the above scenario.
Note: Create a few classes, namely Customer, Account, RBI (Base Class), and a few
derived classes (SBI, ICICI, PNB, etc.). Assume and implement required member
variables and functions in each class.*/

#include <iostream>
#include <string>
using namespace std;

class RBI
{
protected:
    double minInterestRate;
    double minBalance;
    double maxWithdrawalLimit;

public:
    RBI() : minInterestRate(4.0), minBalance(500.0), maxWithdrawalLimit(50000.0) {}

    virtual void displayGuidelines()
    {
        cout << "RBI Guidelines:\n";
        cout << "Minimum Interest Rate: " << minInterestRate << "% annually\n";
        cout << "Minimum Balance: Rs. " << minBalance << "\n";
        cout << "Maximum Withdrawal Limit: Rs. " << maxWithdrawalLimit << "\n";
    }

    virtual double getInterestRate() = 0;
};

class SBI : public RBI
{
private:
    double interestRate;

public:
    SBI() : interestRate(4.5) {}

    double getInterestRate() override
    {
        return interestRate;
    }

    void displayGuidelines() override
    {
        cout << "SBI Guidelines:\n";
        RBI::displayGuidelines();
        cout << "SBI Interest Rate: " << interestRate << "% annually\n";
    }
};

class ICICI : public RBI
{
private:
    double interestRate;

public:
    ICICI() : interestRate(5.0) {}

    double getInterestRate() override
    {
        return interestRate;
    }

    void displayGuidelines() override
    {
        cout << "ICICI Guidelines:\n";
        RBI::displayGuidelines();
        cout << "ICICI Interest Rate: " << interestRate << "% annually\n";
    }
};

class PNB : public RBI
{
private:
    double interestRate;

public:
    PNB() : interestRate(4.25) {}

    double getInterestRate() override
    {
        return interestRate;
    }

    void displayGuidelines() override
    {
        cout << "PNB Guidelines:\n";
        RBI::displayGuidelines();
        cout << "PNB Interest Rate: " << interestRate << "% annually\n";
    }
};
class Customer
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    Customer(string n, int accNo, double bal) : name(n), accountNumber(accNo), balance(bal) {}

    void displayDetails()
    {
        cout << "Customer Details:\n";
        cout << "Name: " << name <<endl;
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Balance: Rs. " << balance <<endl;
    }
};

int main()
{
    SBI sbi;
    ICICI icici;
    PNB pnb;

    cout <<endl;
    sbi.displayGuidelines();
    cout <<endl;
    icici.displayGuidelines();
    cout <<endl;
    pnb.displayGuidelines();

    Customer customer1("Alice", 1001, 10000.0);
    Customer customer2("Bob", 1002, 20000.0);

    cout <<endl;
    customer1.displayDetails();
    cout << endl;
    customer2.displayDetails();

    return 0;
}
