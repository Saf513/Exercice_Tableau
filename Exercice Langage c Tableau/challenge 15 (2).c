/*Challenge 15 : Fusion de Deux Tableaux
Écrivez un programme C qui fusionne deux tableaux d'entiers en
 un seul tableau. Le programme doit demander à l'utilisateur
  le nombre d'éléments pour chaque tableau, puis les éléments des
   deux tableaux, et afficher le tableau fusionné.*/
#include <stdio.h>

int main()
{
    int n,m;
    printf("veuillez saisir la taille de tableau 1 : \n");
    scanf("%d",&n);
    printf("veuillez saisir la taille de tableau 2 : \n");
    scanf("%d",&m);
    int T[n];
    int M[m];
    int i;
    int j=0;;
    printf("veuillez remplir le tableau 1: \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    printf("veuillez remplir le tableau 2: \n");
    for(i = 0 ; i < m ; i++)
    {
        printf("M[%d]= ",i+1);
        scanf("%d",&M[i]);
    }
    for(i=n,j=0; i<n+m,j<m; i++,j++)
    {
        T[i]=M[j];
    }
    printf("le tableau fusionne : \n");
    for(i = 0 ; i < n+m; i++)
    {
        printf("T[%d]= %d \n",i+1,T[i]);

    }

    return 0;
}