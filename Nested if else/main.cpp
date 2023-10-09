#include <iostream>
using namespace std;
int main()
{
    //User will input 3 sides of a triangle and we will determine what type of triangle is that
    float a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;

    if(a==b && b==c)
        cout<<"Equilateral triangle";
    else
        {
            if(a==b||b==c||c==a)
                cout<<"Isoscales";
            else
                cout<<"Scalene";
        }
    system("pause>0");
}