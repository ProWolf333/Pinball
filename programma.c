#include <stdio.h>
 
int main()
{
    float a, b, somma, aa, ab, z, x, y, v, sa;
 
    printf("Inserisci il primo valore: ");
    scanf("%f", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%f", &b);
 
    if (b > 0)
    {
        printf("%.2f è un valore positivo \n", b);
    }
    else
    {
        printf("%.2f è un valore negativo \n", b);
    }
 
     z = a;
     y = b;
 
    while (a > 1)
    {
        a = (a-2);
    }
 
    if (a == 1)
    {
        printf("%.1f è un valore dispari\n", z);
    }
    else if (a == 0)
 
    {
        printf("%.1f è un valore pari\n", z);
    }
 
    //somma normale
 
    somma = (z + b);
 
    printf("La somma di %.1f e %.1f è %.1f\n", z, b, somma);
 
    //rendi il valore assoluto
 
    if (z > 0)
    {
        aa = z;
    }
 
    //printf("Il valore assoluto di %.1f è %.1f \n", z, z);
 
    else
    {
        x = (-z);
        aa = x;
        //printf("Il valore assoluto di %.1f è %.1f \n", z, x);
    }
 
    if (y > 0)
    {
        ab = y;
    }
 
    else
    {
        v = (-y);
        ab = v;
    }
 
    //sommma di valori assoluti
 
    sa = (ab+aa);
 
    printf("La somma assoluta di %.1f e %.1f è %.1f\n", aa, ab, sa);
}