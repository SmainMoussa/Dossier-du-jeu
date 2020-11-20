#include <stdio.h>


/* QUESTION 1 */
void diviseurs(int a)
{
    int i;
    for (i=1; i<= a/2; i++){
        if (a % i == 0){
            printf("%d\n", i);
        }
    }
    if (a > 1){
        printf("%d\n", a);
    }
    printf("\n");
}
/*
int main(){
int a;

printf("entrer une valeur : ");
scanf("%d", &a);

diviseurs(a);
}
*/


/* QUESTION 2 */
int nbdiv(int a)
{
    int i;
    int nb=0;

    for (i=1; i<= a/2; i++){
        if(a%i == 0){
            nb++;
        }
    }
    if (a>1){
            nb++;}
    return nb;
}

void premiers(int a, int b)
{
    int i;
    for (i=a; i<=b; i++){
        if(nbdiv(i) == 2){
            printf("les nombres premiers sont : %d\n", i);
        }
    }
    printf("\n");
}
/*
int main()
{
    int a;
    int b;
    int nb=0;
    printf("Entrer la valeur de a :");
    scanf("%d", &a);
    printf("Entrer la valeur de b :");
    scanf("%d", &b);

    nbdiv(a);
    premiers(a,b);
}
*/

int parfait(int a)
{
    int i;
    int s = 0;

    for (i=1; i<=a/2; i++){
        if (a%i == 0){
            s+=i;
            }
        }

    return (s==a);
}

int main()
{
    diviseurs(10);
    premiers(0,13);
    printf("%d %d\n", parfait(4), parfait(10));
    return 0;
}
