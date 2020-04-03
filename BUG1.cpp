#include <iostream>
#include <DynArray.h>
using namespace std;

template <class T>
class Array
{
T* GetAdress(unsigned int nPos)
{
if(nPos < m_nSize)    return &m_pData[nPos];
}
};

int main()
{
Array <float> tab1(8);
tab1.Set(0,x);
    tab1.Set(1,2);
    tab1.Set(2,2.44);
    tab1.Set(3,-3);
    tab1.Set(4,6.8);
    tab1.Set(5,5.5);
    tab1.Set(6,4.32);
    tab1.Set(7,5.6);
    
for (int i=0; i<8; i++)  cout<<tab1.Get(i)<<" ... "<<tab1.GetAdress(i)<<endl;









return 0;
}
