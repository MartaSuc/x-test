#include <iostream>
#include "DynArray.h"
using namespace std;


int main()
{
Array <float> tab1(8);
tab1.Set(0,7.77);
    tab1.Set(1,2);
    tab1.Set(2,2.44);
    tab1.Set(3,-3);
    tab1.Set(4,6.8);
    tab1.Set(5,5.5);
    tab1.Set(6,4.32);
    tab1.Set(7,5.6);

for (int i=0; i<8; i++)  cout<<tab1.Get(i)<<" ... "<<tab1.GetAdress(i)<<endl;
tab1.Array::~Array();               //call destructor tab1
cout<<endl;
for (int i=0; i<8; i++)  cout<<tab1.Get(i)<<" ... "<<tab1.GetAdress(i)<<endl;

Array <float> tab2(3);
tab2.Set(0, 55.8);
tab2.Set(1, 77.7);
tab2.Set(2, 99.9);

cout<<endl;
for (int i=0; i<3; i++)  cout<<tab2.Get(i)<<" *** "<<tab2.GetAdress(i)<<endl;

return 0;
}
