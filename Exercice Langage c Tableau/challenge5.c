/*Challenge 5 : Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus petit élément
dans un tableau d'entiers. Le programme doit demander le nombre
 d'éléments et les éléments du tableau.*/
 #include <stdio.h>
 int main()
 {
 int n;
 printf("veuillez saisir la taille de tableau : \n");
 scanf("%d",&n);
 int T[n];
 int i;
 int min=T[0];
 printf("veuillez remplir le tableau : \n");
 for(i = 0 ; i < n ; i++)
 {
 printf("T[%d]= ",i+1);
 scanf("%d",&T[i]);
}
for(i = 0 ; i < n ; i++)
 {
 if(T[i]<min)
 min=T[i];
}
printf("la maximun est  : %d \n",min);
 
return 0; 
 }