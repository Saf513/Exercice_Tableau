/*Challenge 1 : Initialisation et Affichage
Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données
et affiche ces valeurs. Par exemple, vous pouvez initialiser un tableau avec les valeur
[1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.*/
#include <stdio.h>
int main()
{
    int T[5]= {3,6,12,24,47};
    int i;
    printf("l'element detableau : \n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("T[%d]= %d \n",i+1,T[i]);

    }
    return 0;
}