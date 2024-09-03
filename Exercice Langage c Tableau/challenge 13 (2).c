/*Challenge 13 : Afficher les Éléments Impairs
Écrivez un programme C qui affiche uniquement les éléments
 impairs d'un tableau d'entiers. Le programme doit demander
  le nombre d'éléments et les éléments du tableau.*/
int main()
{
    int n;
    printf("veuillez saisir la taille de tableau : \n");
    scanf("%d",&n);
    int T[n];
    int i;
    printf("veuillez remplir le tableau : \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    printf("le éléments impaire de tableau sont : \n");
    for(i = 0 ; i < n ; i++)
    {
        if(T[i] % 2 != 0)
        {
            printf(" %d ",T[i]);
        }
    }

    return 0;
}