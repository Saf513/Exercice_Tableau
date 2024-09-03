/*Challenge 9 : Inversion d'un Tableau
Écrivez un programme C qui inverse les éléments d'un tableau
d'entiers. Par exemple, si le tableau est [1, 2, 3, 4, 5],
 il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé..*/
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
    for(i = 0 ; i < n ; i++)
    {
        inverse[i] =T[n-i-1];
    }
    printf("le tableau inverse: \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("inverse[%d]= %d\n",i+1,inverse[i]);
    }

    return 0;
}