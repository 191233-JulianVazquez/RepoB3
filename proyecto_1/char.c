#include <stdio.h>
#include <ctype.h> 
#include <conio.h>
 

int main ()
{
    char minuscula, mayuscula;
    printf("Ingrese una letra en minuscula: ");
    scanf("%c",&minuscula);
    mayuscula = 'A' + minuscula - 'a';
    printf("=> %c",mayuscula);

    getch();
    return 0;
}
