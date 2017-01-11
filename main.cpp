#include <iostream>
#include <stdio.h>

using namespace std;

void introduction();
void calculator(double);
void advCalculator(double);
void incomeType();
void annual();
void monthly();

int main()
{
    introduction();

    incomeType();

    return 0;
}

void introduction()
{
    cout << endl;
    cout << "Note: All following information is for the year 2017" << endl;
    cout << "Void if not the year 2017" << endl;
    cout << endl;
}

void incomeType()
{
    int choice = 0;

    cout << "Please Choose Your Type of Income:" << endl;
    cout << "\t1) Annual (1)" << endl;
    cout << "\t2) Monthly (2)" << endl;
    cout << "Choice: ";

    cin >> choice;

    switch (choice)
    {
        case 0:
        {
            cout << "Invalid Choice" << endl;
            incomeType();
            break;
        }
        case 1:
        {
            annual();
            break;
        }
        case 2:
        {
            monthly();
            break;
        }
    }
}

void annual()
{
    double income;
    int choice;

    cout << "\nPlease Enter Calculator Type:" << endl;
    cout << "\t1) Basic (1)" << endl;
    cout << "\t2) Advanced (2)" << endl;
    cout << "Choice: ";

    cin >> choice;

    cout << endl;

    cout << "Please enter your annual income:" << endl;
    cout << "$";

    cin >> income;

    if (choice == 1)
    {
        calculator(income/12);
    }
    else if (choice == 2)
    {
        advCalculator(income/12);
    }
    else
    {
        cout << "\nInvalid Choice." << endl;
        annual();
    }
}

void monthly()
{
    double income;
    int choice;

    cout << "\nPlease Enter Calculator Type:" << endl;
    cout << "\t1) Basic (1)" << endl;
    cout << "\t2) Advanced (2)" << endl;
    cout << "Choice: ";

    cin >> choice;

    cout << endl;

    cout << "Please enter your monthly income:" << endl;

    cin >> income;

    if (choice == 1)
    {
        calculator(income);
    }
    else if (choice == 2)
    {
        advCalculator(income);
    }
    else
    {
        cout << "\nInvalid Choice." << endl;
        monthly();
    }
}

void calculator(double income)
{
    double twentyFive = income * 0.25;
    double thirtyFive = income * 0.35;
    double fourtyFive = income * 0.45;

    char repeat;

    cout << "\nHouse Price (15 Years, No Interest):" << endl;
    cout << "-----------------" << endl;
    cout << "Percentage of Income:\t25%\t\t35%\t\t45%" << endl;

    cout << "Monthly Payments:";
    cout << "\t$" << twentyFive << "\t$" << thirtyFive << "\t$" << fourtyFive <<
    endl;

    cout << "Yearly Payments:";
    cout << "\t$" << twentyFive*12 << "\t\t$" << thirtyFive*12 << "\t\t$" <<
    fourtyFive*12 << endl;

    cout << "Price of House:";
    cout << "\t\t$" << twentyFive*12*15 << "\t\t$" << thirtyFive*12*15 <<
    "\t\t$" << fourtyFive*12*15 << endl;

    cout << endl;

    cout << "Mortgage Fixed Interest Rate:" << endl;
    cout << "-----------------------------" << endl;
    cout << "Interest Payment (4%):";
    cout << "\t$" << twentyFive*12*.04 << "\t\t$" << thirtyFive*12*.04 <<
    "\t\t$" << fourtyFive*12*.04 << endl;

    cout << "Interest Payment (6%):";
    cout << "\t$" << twentyFive*12*.06 << "\t\t$" << thirtyFive*12*.06 <<
    "\t\t$" << fourtyFive*12*.06 << endl;

    cout << "\nActual Cost (4% interest):" << endl;
    cout << "--------------------------" << endl;
    cout << "Actual Monthly:";
    cout << "\t\t$" << twentyFive + (twentyFive*12*.04)/12 <<
            "\t$" << thirtyFive + (thirtyFive*12*.04)/12 <<
            "\t$" << fourtyFive + (fourtyFive*12*.04)/12 << endl;

    cout << "Actual Yearly:";
    cout << "\t\t$" << twentyFive*12 + twentyFive*12*.04 <<
            "\t\t$" << thirtyFive*12 + thirtyFive*12*.04 <<
            "\t\t$" << fourtyFive*12 + fourtyFive*12*.04 << endl;

    cout << "\nActual Cost (6% interest):" << endl;
    cout << "--------------------------" << endl;
    cout << "Actual Monthly:";
    cout << "\t\t$" << twentyFive + (twentyFive*12*.06)/12 <<
            "\t$" << thirtyFive + (thirtyFive*12*.06)/12 <<
            "\t$" << fourtyFive + (fourtyFive*12*.06)/12 << endl;

    cout << "Actual Yearly:";
    cout << "\t\t$" << twentyFive*12 + twentyFive*12*.06 <<
            "\t\t$" << thirtyFive*12 + thirtyFive*12*.06 <<
            "\t\t$" << fourtyFive*12 + fourtyFive*12*.06 << endl;

    cout << endl;

    cout << "Profit if Sold (at same price) in 10 Years:" << endl;
    cout << "-------------------------" << endl;
    cout << "4% Interest:";
    cout << "\t\t$" << (twentyFive*12)*10 -
                       (twentyFive*12 + twentyFive*12*.04)*10 <<
            "\t\t$" << (thirtyFive*12)*10 -
                       (thirtyFive*12 + thirtyFive*12*.04)*10 <<
            "\t\t$" << (fourtyFive*12)*10 -
                       (fourtyFive*12 + fourtyFive*12*.04)*10 <<
            endl;

    cout << "6% Interest:";
    cout << "\t\t$" << (twentyFive*12)*10 -
                       (twentyFive*12 + twentyFive*12*.06)*10 <<
            "\t\t$" << (thirtyFive*12)*10 -
                       (thirtyFive*12 + thirtyFive*12*.06)*10 <<
            "\t\t$" << (fourtyFive*12)*10 -
                       (fourtyFive*12 + fourtyFive*12*.06)*10 <<
            endl;

    cout << endl;

    cout << "Selling Price to Come Out Even In 10 Years:" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "4% Interest:";
    cout << "\t\t$" << (twentyFive*12 + twentyFive*12*.04)*10 -
                       (twentyFive*12)*10 + twentyFive*12*15 <<
            "\t\t$" << (thirtyFive*12 + thirtyFive*12*.04)*10 -
                       (thirtyFive*12)*10 + thirtyFive*12*15 <<
            "\t\t$" << (fourtyFive*12 + fourtyFive*12*.04)*10 -
                       (fourtyFive*12)*10 + fourtyFive*12*15 << endl;

    cout << "6% Interest:";
    cout << "\t\t$" << (twentyFive*12 + twentyFive*12*.06)*10 -
                       (twentyFive*12)*10 + twentyFive*12*15 <<
            "\t\t$" << (thirtyFive*12 + thirtyFive*12*.06)*10 -
                       (thirtyFive*12)*10 + thirtyFive*12*15 <<
            "\t\t$" << (fourtyFive*12 + fourtyFive*12*.06)*10 -
                       (fourtyFive*12)*10 + fourtyFive*12*15 << endl;

    cout << endl;

    cout << "Would you like to try again? (y/n)" << endl;

    cin >> repeat;

    cout << endl;

    if (repeat == 'y')
    {
        incomeType();
    }
    else
    {
        cout << "Thank you for using the calculator." << endl;
    }
}

void advCalculator(double income)
{
    int years;
    int mortgageYears;
    double pOfIncome;
    double interestRate;

    char repeat;

    cout << "\nHow Long Do You Plan On Keeping The House? (years)" << endl;
    cin >> years;
    cout << endl;

    cout << "How Long Is Your Mortgage? (years)" << endl;
    cin >> mortgageYears;
    cout << endl;

    cout << "What Percentage of Your Monthly Income Goes To House?" << endl;
    cin >> pOfIncome;
    pOfIncome = pOfIncome/100;
    cout << endl;

    cout << "What is Your Mortgage Interest Rate?" << endl;
    cin >> interestRate;
    interestRate = interestRate/100;
    cout << endl;

    cout << "\nHouse Price (" << years << " Years, No Interest):" << endl;
    cout << "-----------------" << endl;
    cout << "Percentage of Income:\t" << pOfIncome*100 << "%" << endl;

    cout << "Monthly Payments:";
    cout << "\t$" << income * pOfIncome << endl;

    cout << "Yearly Payments:";
    cout << "\t$" << income * pOfIncome * 12 << endl;

    cout << "Price of House:";
    cout << "\t\t$" << income * pOfIncome * 12 * mortgageYears << endl;

    cout << endl;

    cout << "Mortgage Fixed Interest Rate:" << endl;
    cout << "-----------------------------" << endl;
    cout << "Interest Payment (" << interestRate * 100 << "%):";
    cout << "\t$" << income * pOfIncome * 12 * interestRate << endl;

    cout << "\nActual Cost (" << interestRate * 100 << "% interest):" << endl;
    cout << "--------------------------" << endl;
    cout << "Actual Monthly:";
    cout << "\t\t$" << income * pOfIncome +
            (income * pOfIncome*12*interestRate)/12 << endl;

    cout << "Actual Yearly:";
    cout << "\t\t$" << income * pOfIncome *12 +
            income * pOfIncome * 12 * interestRate << endl;

    cout << endl;

    cout << "Profit if Sold (at same price) in " << years << " Years:" << endl;
    cout << "-------------------------" << endl;
    cout << interestRate * 100 << "% Interest:";
    cout << "\t\t$" << (income * pOfIncome * 12) * years -
                       (income * pOfIncome * 12 +
                        income * pOfIncome * 12 * interestRate) * years << endl;

    cout << endl;

    cout << "Selling Price to Come Out Even In " << years << " Years:" << endl;
    cout << "-------------------------------------------" << endl;
    cout << interestRate * 100 << "% Interest:";
    cout << "\t\t$" << (income * pOfIncome * 12 + income * pOfIncome * 12 * interestRate) * years -
                       (income * pOfIncome * 12) * years + income * pOfIncome * 12 * mortgageYears << endl;

    cout << endl;

    cout << "Would you like to try again? (y/n)" << endl;

    cin >> repeat;

    cout << endl;

    if (repeat == 'y')
    {
        incomeType();
    }
    else
    {
        cout << "Thank you for using the calculator." << endl;
    }
}
