#include "secv5.h"
#include <iostream>

using  namespace std;
int prim(int n)
{
    int ok=1;
    for(int d=2;d<=n/2;d++)
    {
        if(n%d==0)
            ok=0;

    }
    if(n==2)
        return 1;
    if(n==1||n==0)
        return 0;
    if(ok==1)
        return 1;
    return 0;
}

void secv5(int n, int v[])
{
    int i, lmax, pmax, pc, lc;
    lmax = 0;
    lc=1;
    pc=1;
    for ( i = 2; i<=n; i++ ){
        if (prim(v[i]-v[i-1])==1){
            lc++;
        }
        else
        {
            lc=1;
            pc=i;
        }
        if (lmax<lc){
            lmax=lc;
            pmax=pc;
        }
    }
    for (i = pmax; i <= pmax+lmax-1; i++){
        cout<<v[i]<<" ";
    }
}

