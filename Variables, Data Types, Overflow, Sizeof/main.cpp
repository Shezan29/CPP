#include <iostream>
using namespace std;
int main()
{
    bool moreThan18 = false;
    cout<<moreThan18<<endl;

    cout<<"Size of int is " <<sizeof(int) <<" Bytes" <<endl;
    cout<<"Int minimum value = " <<INT32_MAX <<endl;
    cout<<"Size of unsigned int is " <<sizeof(unsigned int) <<" Bytes." <<endl;
    cout<<"UInt max value = " << UINT32_MAX <<endl;

    //Data overflowing: when we reach the max value then it will start from the min value again 
    cout<<"Data overflow: " <<endl;
    int intMax = INT_FAST32_MAX;
    cout<<intMax <<endl;
    cout<<intMax+1 <<endl;
    system("pause>0");
}