/*Challenge 8 : Copie d'un Tableau
Écrivez un programme C qui copie les éléments d'un tableau 
d'entiers dans un autre tableau. Affichez les éléments du tableau
 original et du tableau copié pour vérifier que la copie est correcte.*/
#include <stdio.h>
int main()
{
    int n;
    printf("veuillez saisir la taille de tableau : \n");
    scanf("%d",&n);
    int T[n];
    int i;
    int copie[n];
    printf("veuillez remplir le tableau : \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
       copie[i] =T[i];
    }
    printf("le tableau en ordre croissant \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("copie[%d]= %d\n",i+1,copie[i]);
    }

    return 0;
}