/*Challenge 14 : Calculer la Moyenne
Écrivez un programme C qui calcule la moyenne des éléments
d'un tableau d'entiers. Le programme doit demander le nombre
d'éléments, les éléments du tableau, puis afficher la moyenne*/
#include <stdio.h>

int main()
{
    int n;
    printf("veuillez saisir la taille de tableau : \n");
    scanf("%d",&n);
    int T[n];
    int i;
    int som=0;
    float moy;
    printf("veuillez remplir le tableau : \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
        som+=T[i];
    }
    printf("la moyenne de tableau : %.2f",(float)som/(float)n);

    return 0;
}