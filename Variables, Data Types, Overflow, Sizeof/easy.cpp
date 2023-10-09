#include <iostream>
using namespace std;
int main()
{
    float monthlySalary,annualSalary;
    cout<<"Enter your annual salary: ";
    cin>>annualSalary;
    
    monthlySalary = annualSalary/12;
    cout<<"Your monthly salary is " <<monthlySalary <<endl;
    cout<<"In 10 years you will earn " <<annualSalary*10 <<endl;

    system("pause>0");
}