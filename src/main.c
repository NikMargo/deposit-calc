#include <stdio.h>
#include "deposit.h"

int main(){
    int sr,x;
    int sv;
    printf("Srok vklada:");
    scanf("%d", &sr);
    printf("Summa vklada:");
    scanf("%d", &sv);
    x=getinput(sr, sv);
        if (x == 0 )
            return 0;
        else if (x == 1)
    raschet(sr, sv);
    printf("Itog: %d", sv);
return 0;
}

