#include <stdio.h>
int main()
{
    int X,Y,i,aux=0;

    scanf("%d", &X);
    scanf("%d", &Y);

    
    if(Y<X)
    {
        aux=Y; //aux=5 (y=5)
        Y=X;   //y=2 (x=2)
        X=aux; //x=5 (aux=5)
    }
    for(i=X+1; i<Y; i++)
    {
        if(i%5==2||i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
