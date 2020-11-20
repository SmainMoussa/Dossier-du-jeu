#include <stdio.h>

int main(){

    int a,b,c;
    int e =0;

    printf("Entrer le premier entier :");
    scanf("%d",&a);
    printf("Entrer le deuxieme entier :");
    scanf("%d",&b);
    printf("Entrer le troisieme entier :");
    scanf("%d",&c);

do
{
    if(a>b)
    {
        e=a;
        a=b;
        b=e;
    }
    else if(b>c)
    {
        e=b;
        b=c;
        c=e;
    }
}while(!((a<b)&&(a<c)&&(b<c)));

printf("Les nombres sont maintenant dans l'ordre croissant : %d <= %d <= %d", a, b, c);
}
