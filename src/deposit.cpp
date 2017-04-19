#include <stdio.h>
#include "deposit.h"

int getinput(int* sr, double* sv)
{
    if (*sr<0 || *sr>365 || *sv<1000)
    {
        return 0;
    }   
    else 
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
