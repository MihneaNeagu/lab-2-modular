#include <iostream>
#include "citire.h"
#include "afisare.h"
#include "secv4.h"
#include "secv5.h"
using namespace std;
int v[1001],n;
int main()
{
    while (true)
    {
        cout<<"1. Scrieti o lista de numere intregi: "<<'\n';
        cout<<"2. Afisati lista de numere intregi: "<<'\n';
        cout<<"3. Afisati cea mai lunga secventa care : "<<'\n';
        cout<<"4. Afisati cea mai lunga secventa care :"<<'\n';
        cout<<"5. Exit"<<'\n';
        int optiune;
        cout<<"Dati optiunea:";

        cin>>optiune;
        if (optiune==1)
            citire(n,v);
        else if (optiune==2)
            afisare(n,v);
        else if (optiune==3)
            secv4(n,v);
        else if (optiune==4)
            secv5(n,v);
        else if (optiune==5)
            break;
    }
    return 0;
}
