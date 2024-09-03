/*Challenge 6 : Multiplication des Éléments
Écrivez un programme C qui multiplie chaque élément d'un
tableau d'entiers par un facteur donné et affiche le tableau résultant.
Le programme doit demander le nombre d'éléments, les éléments du tableau,
et le facteur de multiplication.*/
 #include <stdio.h>
 int main()
 {
 int n;
 int fct;
 printf("veuillez saisir la taille de tableau : \n");
 scanf("%d",&n);
 printf("veuillez saisir le facteur de multiplication : \n");
 scanf("%d",&fct);
 int T[n];
 int i;
 printf("veuillez remplir le tableau : \n");
 for(i = 0 ; i < n ; i++)
 {
 printf("T[%d]= ",i+1);
 scanf("%d",&T[i]);
}
for(i = 0 ; i < n ; i++)
 {
 T[i]*=fct;
}
printf("le tableau multiplier par %d \n",fct);
for(i = 0 ; i < n ; i++)
 {
 printf("T[%d]= %d\n",i+1,T[i]);
}
 
return 0; 
 }