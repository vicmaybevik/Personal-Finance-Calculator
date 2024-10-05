# Readme

# Personal Finance Calculator

## Overview
This Personal Finance Calculator is a simple C++ program designed to help users perform basic financial calculations. It provides a user-friendly interface for calculating monthly budgets, determining savings goals, and displaying financial summaries.

## Features
1. **Calculate Monthly Budget**: Determines the difference between income and expenses.
2. **Compute Savings Goal**: Calculates the monthly savings needed to reach a specific goal.
3. **Display Financial Summary**: Shows an overview of income, expenses, and savings.

## How to Use
1. Run the program.
2. Choose from the following options in the main menu:
   - Option 1: Calculate Monthly Budget
   - Option 2: Compute Savings Goal
   - Option 3: Display Financial Summary
   - Option 4: Exit the program
3. Follow the prompts to input the required financial information.
4. View the calculated results.

## Technical Details
- Language: C++
- Compiler: Any standard C++ compiler (e.g., g++, clang++)

## Functions
1. `calculateMonthlyBudget(double income, double expenses)`: 
   - Calculates the difference between income and expenses.
   - Returns the monthly budget (positive if income > expenses, negative otherwise).

2. `computeSavingsGoal(double currentSavings, double goalAmount, int months)`:
   - Calculates the monthly savings needed to reach a goal amount.
   - Returns 0 if the goal is already met or if the input is invalid.

3. `displayFinancialSummary(double income, double expenses, double savings)`:
   - Displays a summary of the user's financial situation.
   - Void function, does not return a value.

