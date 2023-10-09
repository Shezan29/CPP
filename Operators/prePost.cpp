#include <iostream>
using namespace std;
int main()
{
    // Incerements
    int counter = 7;
    cout << "Counter values:" << endl;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter_2 = 2;
    cout << "Counter_2 values:" << endl;
    cout << counter_2++ << endl;
    cout << counter_2 << endl;
    cout << counter_2-- << endl;
    cout << counter_2 << endl <<endl;


    //Relational Operator
    cout<<"Using relational operator:" <<endl;
    int a = 4, b = 5;
    cout<<(a>b) <<endl;
    cout<<(a<=b) <<endl;
    cout<<(a==b) <<endl;

    //Logical Operator
    cout<<"Using logical operator:" <<endl;
    cout<<(a==5 && b==5) <<endl;
    cout<<!(a==5 && b==5) <<endl;

    //Assignment Operator
    cout<<"Using assignment operator:" <<endl;
    a = 5;
    a += 3;
    cout<<a <<endl;
    system("pause>0");
}