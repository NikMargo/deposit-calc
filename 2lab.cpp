#include <iostream>
#include <stdio.h>

using namespace std;

int vvod(int* sr, double* sv)
{
    cout<<"Srok vklada:";
    cin>>*sr;
    cout<<"Summa vklada:";
    cin>>*sv;
}
int raschet(int* sr, double* sv)
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
int main(){
    int sr;
    double sv;
    vvod(&sr,&sv);
    if (sr<0 || sr>365){
	    cout<<"Eror"<<" ";
	        return 1;
    }

    if (sv<1000){
	    cout<<"Eror2"<<" ";
	        return 1;
    }
     raschet(&sr, &sv);
        cout<<"Itog:"<<sv;
    return 0;
}
