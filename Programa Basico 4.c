/*Dep3_Prog4:Verificar si es una letra o una vocal*/
#include <stdio.h>
int main()
{
    char letra;
    printf("\n Introduce un numero");
    scanf("%c", &letra);

    if ( letra == 'a' ​|​| letra == 'A' ) ​|​|
       ( letra == 'e' ​|​| letra == 'E' ) ​|​|
       ( letra == 'i' ​|​| letra == 'I' ) ​|​|
       ( letra == 'o' ​|​| letra == 'O' ) ​|​|
       ( letra == 'u' ​|​| letra == 'U' ) 
     
       )
       {
           printf("\n ES UNA VOCAL");
       }
       else
       {
           printf("\n NO ES UNA VOCAL");
       }

       return 0