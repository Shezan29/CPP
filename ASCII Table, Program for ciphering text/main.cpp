#include <iostream>
using namespace std;
int main()
{
    cout<<(int)'a' <<endl;
    cout<<(int)'A' <<endl;
    cout<<(char)97 <<endl;

    //Ciphering 
    char c1,c2,c3,c4,c5;
    cout<<"Enter five letters: ";
    cin>> c1 >> c2 >> c3 >> c4 >> c5;
    cout<<"ASCII message : " <<(int)c1 <<" " <<(int)c2 <<" " <<(int)c3 <<" " <<(int)c4 <<" " <<(int)c5;
    system("pause>0");

    //Dicipehring
    int i1,i2,i3,i4,i5;
    cout<<"Enter five numbers: ";
    cin>> i1 >> i2 >> i3 >> i4 >> i5;
    cout<<"Decoded message: " <<(char)i1<<(char)i2<<(char)i3<<(char)i4<<(char)i5 <<endl;
    system("pause>0");
}