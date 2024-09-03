/*Challenge 7 : Tableau en Ordre Croissant
Écrivez un programme C qui demande à l'utilisateur de saisir un
 tableau d'entiers, puis affiche le tableau trié en ordre croissant
  sans utiliser de fonction de tri prédéfinie.*/
#include <stdio.h>
int main()
{
    int n;
    printf("veuillez saisir la taille de tableau : \n");
    scanf("%d",&n);
    int T[n];
    int i;
    int index;
    int j,temp;
    printf("veuillez remplir le tableau : \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    for(i = 0 ; i < n -1; i++)
    {
        index=i;
        for (j =i+1 ; j < n ; j++)
        {
            if(T[j]<T[index])
                index=j;
        }
        temp=T[index];
        T[index]=T[i];
        T[i]=temp;
    }
    printf("le tableau en ordre croissant \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= %d\n",i+1,T[i]);
    }

    return 0;
}