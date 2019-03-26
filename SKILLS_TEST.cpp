#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double TaxRate = 0.14;
    const double Clothespercentage = 0.10;
    const double SchoolandSuppliespercentage = 0.01;
    const double Savingbondspercentage = 0.25;
    const double Parentscocontributionintheamount = 0.50;
    string FirstName, LastName;
    
    cout << "Have a great day!"<< endl;
   
    cout << "FirstName: ";
    cin >> FirstName;
    cout << "LastName: ";
    cin >> LastName;
    
    
    cout << "How many hours did you work: " ;
    cin >> hoursWorked; 
    
    cout << "How much do you earned per hour:";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TaxRate;
    clothesAmount = netIncome * Clothespercentage;
    schoolAmount = netIncome * SchoolandSuppliespercentage;
    netIncome -= (clothesAmount + schoolAmount); // Calculate what is now left
    bondsAmount = netIncome * Savingbondspercentage;
    parentsBondsAmount = bondsAmount * Parentscocontributionintheamount;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Break Down of Expenses and Salary by "<< FirstName << " " << LastName << " " << endl;
	cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories that you spend: $" << clothesAmount << endl;
    cout << "School Supplies that you spend: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
    cout << "THANK YOU FOR ANSWERING!" << endl;
    _getch();
    return 0;
}
