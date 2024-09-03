/*Challenge 11 : Remplacer un Élément
Écrivez un programme C qui remplace toutes les occurrences d'une
valeur spécifique dans un tableau d'entiers par une nouvelle valeur.
 Le programme doit demander à l'utilisateur le nombre d'éléments,
  les éléments du tableau, la valeur à remplacer, et la nouvelle
  valeur.*/
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

    int cherche;
    int remplacer;
    printf("veuillez entrer l'element a remplacer : \n");
    scanf("%d",&cherche);
    printf("veuillez entrer la nouvelle valeur : \n");
    scanf("%d",&remplacer);

    for(i = 0 ; i < n ; i++)
    {
        if(T[i]==cherche)
        {
            T[i]=remplacer;
        }
    }
    printf("le tableau apres le remplacement : \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("T[%d]= %d \n",i+1,T[i]);

    }
    return 0;
}