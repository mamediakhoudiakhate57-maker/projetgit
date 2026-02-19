#include <stdio.h>
int main ()
{
    int x,cpt,i;
    do
    {
        printf("saisir un entier positif:");
        scanf("%d",&x);
    }
    while(x<=0);
    cpt=0;
    for(i=1; i<= x-1 ; i++)
    {
        if(x%i==0)
        {
            cpt+=i;
        }
    }
    if(cpt==x)
    {
        printf("ce nombre est parfait:");
    }
    else
    {
        printf("ce nombre n'est pas parfait:");
    }


    return 0;
}

