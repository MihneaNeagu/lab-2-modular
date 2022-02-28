#include <iostream>
#include "citire.h"

using namespace std;

void citire(int &n,int v[]){
    cout<<"Dati n:";
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}


