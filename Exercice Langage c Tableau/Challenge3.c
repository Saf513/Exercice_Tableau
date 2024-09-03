/*Challenge 3 : Somme des Éléments
Écrivez un programme C qui calcule et affiche la somme des éléments
 d'un tableau d'entiers. Le programme doit demander le nombre d'éléments,
  puis les éléments du tableau, et afficher la somme totale.*/
 #include <stdio.h>
 int main()
 {
 int n;
 printf("veuillez saisir la taille de tableau : \n");
 scanf("%d",&n);
 int T[n];
 int i;
 int som=0;
 printf("veuillez remplir le tableau : \n");
 for(i = 0 ; i < n ; i++)
 {
 printf("T[%d]= ",i+1);
 scanf("%d",&T[i]);
 som+=T[i];
}
printf("la somme est  : %d \n",som);
 
return 0; 
 }