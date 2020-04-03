#include <iostream>
#include <typeinfo>
#include "DynArray.h"
using namespace std;


int main()
{
    Array <char> tab1(5);
    Array <float> tab2(5);

    char znak='q';
    float liczba=44.55;
    string tekst="tekst%$?";

    cout<<typeid(znak).name()<<endl;
    cout<<typeid(liczba).name()<<endl;
    cout<<typeid(tekst).name()<<endl<<endl;

    tab1.Set(0,znak);
    tab1.Set(1,liczba);
    tab1.Set(2, 's');
    tab1.Set(3,6.77);
//  tab1.Set(4,tekst);      reported error: invalid data type
    for (int i=0; i<5; i++)  cout<<tab1.Get(i)<<endl;
    cout<<typeid(tab1).name()<<endl<<endl;

    tab2.Set(0,znak);
    tab2.Set(1,liczba);
    tab2.Set(2,'k');
    tab2.Set(3, 5.88);
//  tab2.Set(4,tekst);      reported error: invalid data type

    for (int i=0; i<5; i++)  cout<<tab2.Get(i)<<endl;

    cout<<typeid(tab2).name()<<endl;


return 0;
}
