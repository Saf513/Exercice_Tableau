/**Challenge 2 : Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau,
 puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments 
 du tableau.*/
 #include <stdio.h>
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
printf(" le tableau : \n");
 for(i = 0 ; i < n ; i++)
 {
 printf("T[%d]= %d \n",i+1,T[i]);
}
 
return 0; 
 }