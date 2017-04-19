#include <stdio.h>
#include <iostream>
#include "deposit.h"
using namespace std;

int main(){
    int sr,x;
    double sv;
    cout<<"Srok vklada:";
    cin>>sr;
    cout<<"Summa vklada:";
    cin>>sv;
    x=getinput(&sr, &sv);
        if (x == 0 )
            return 0;
        else if (x == 1)
    raschet(&sr, &sv);
    cout<<"Itog:"<<sv;
return 0;
}

