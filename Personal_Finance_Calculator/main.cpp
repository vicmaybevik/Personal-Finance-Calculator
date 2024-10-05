//
//  main.cpp
//  Personal_Finance_Calculator
//
//  Created by Victor T on 10/4/24.
//

#include <iostream>
// Personal Finance Calculator
using namespace std;

double calculateMonthlyBudget(double income, double expenses);
double computeSavingsGoal(double currentSavings, double goalAmount, int months);
void displayFinancialSummary(double income, double expenses, double savings);// this function will convert currency



double calculateMonthlyBudget(double income, double expenses) {
    return income - expenses;
    }

double computeSavingsGoal(double currentSavings, double goalAmount, int months) {
    if (months <= 0 || goalAmount <= currentSavings) return 0;

    double amountNeeded = goalAmount - currentSavings;
    return amountNeeded / months;
}


void displayFinancialSummary(double income, double expenses, double savings){
    cout << "your income is " << income << endl;
    cout << "your expenses is " << expenses << endl;
    cout << "your savings is " << savings << endl;
}


int main() {
    int choice;
    double income, expenses, currentSavings = 0.0, goalAmount = 0.0, savings= 0.0;
    int months = 0;

    do {
        cout << "\nPersonal Finance Calculator\n";
        cout << "1. Calculate Monthly Budget\n";
        cout << "2. Compute Savings Goal\n";
        cout << "3. Display Financial Summary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter income: ";
                cin >> income;
                cout << "Enter expenses: ";
                cin >> expenses;
                cout << "Monthly Budget: " << calculateMonthlyBudget(income, expenses) << endl;
                break;
            case 2:
                cout << "Enter currentSavings: ";
                cin >> currentSavings;
                cout << "goalAmount: ";
                cin >> goalAmount;
                cout << "months: ";
                cin >> months;
                cout << "Monthly savings needed: " << computeSavingsGoal(currentSavings, goalAmount, months) << endl;
                break;
            case 3:
                cout << "Enter income: ";
                cin >> income;
                cout << "Enter expenses: ";
                cin >> expenses;
                cout << "Enter savings: ";
                cin >> savings;
                cout << "Display Financial Summary " << endl;
                displayFinancialSummary(income, expenses, savings);
                cout << endl;
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 4);

    return 0;
}
