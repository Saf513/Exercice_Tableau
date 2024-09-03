/*Challenge 10 : Rechercher un Élément
Écrivez un programme C qui recherche un élément spécifique dans
un tableau d'entiers en utilisant une recherche linéaire.
Le programme doit demander à l'utilisateur le nombre d'éléments,
les éléments du tableau, et l'élément à rechercher, puis afficher si l'élément est présent ou non.*/
#include <stdio.h>
int main()
{
    int n;
    printf("veuillez saisir la taille de tableau : \n");
    scanf("%d",&n);
    int T[n];
    int i;
    int inverse[n];
    printf("veuillez remplir le tableau : \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    int cherche;
    int trouve=0;
    printf("veuillez entrer l'element a cherché : \n");
    scanf("%d",&cherche);
    for(i = 0 ; i < n ; i++)
    {
        if(T[i]==cherche)
        {
            trouve=1;
            break;
        }
    }
    if(trouve==1) {
        printf("l'élément est trouvé \n");
    }
    else {
        printf("l'élément non trouvable \n");
    }
    return 0;
}