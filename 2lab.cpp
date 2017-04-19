#include <iostream>
#include <stdio.h>
using namespace std;

void raschet(int*, double*);
int getinput(int*, double*);

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

int getinput(int* sr, double* sv)
{
    if (*sr<0 || *sr>365 || *sv<1000)
    {
        cout<<"error"<<"\n";
        return 0;
    } else 
        return 1;

}
void raschet(int* sr, double* sv)
{
    if (*sr>0 && *sr<=30){
    *sv*=0.9;
    }

    if (*sr>=31 && *sr<=120){
        *sv*=1.02;
    }

    if (*sr>=121 && *sr<=240){
        *sv*=1.06;
    }

    if (*sr>=241 && *sr<=365){
       *sv*=1.12;
    }

}
