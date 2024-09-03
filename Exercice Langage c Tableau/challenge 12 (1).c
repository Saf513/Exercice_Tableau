/*Challenge 12 : Afficher les Éléments Paire
Écrivez un programme C qui affiche uniquement les éléments pairs
d'un tableau d'entiers. Le programme doit demander le nombre
 d'éléments et les éléments du tableau..*/
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
    printf("le éléments paire de tableau sont : \n");
    for(i = 0 ; i < n ; i++)
    {
        if(T[i] % 2 == 0)
        {
            printf(" %d ",T[i]);
        }
    }

    return 0;
}