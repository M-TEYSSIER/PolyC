#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	int M,N,tab[60][60], Yd,Xd; // Init Tab[MAX][MAX]
	char c; // Pour le WHILE(){}
	printf("Largeur de la grille (Max: 60):");
	scanf("%d", &M);
	while((((c=getchar()) !='\n') && c!=EOF));
	printf("Longueur de la grille (Max:60):");
	scanf("%d", &N);
	while((((c=getchar()) !='\n') && c!=EOF));

	printf("Point de départ sur la longueur:");
	scanf("%d", &Xd);
	while((((c=getchar()) !='\n') && c!=EOF));
	printf("Point de départ sur la largeur:");
	scanf("%d", &Yd);
	while((((c=getchar()) !='\n') && c!=EOF));


	// Init TAB à 0 dans chaque case
	for(int i=0;i<M;i++){ 
		for(int j=0;j<N;j++){
			tab[i][j]=0;	
		}
	}
	
	for(int i=0;i<N;i++){tab[0][i]= -1;}
	for(int i=0;i<M;i++){tab[i][0]= -1;}
	for(int i=0;i<N;i++){tab[M][i]= -1;}
	for(int i=0;i<M;i++){tab[i][N]= -1;}

	srand(time(0));// Aide pour un meilleur random

	for(int i=0; i<(N*M/5) ; i++){
		tab[rand() % (0+M)][rand() % (0+N)] = -1;
	}
	tab[Xd][Yd]=1;// Point de départ
	tab[rand()%(0+M)][rand()%(0+N)]=-2;// Point d'arrivé

	for(int i=0;i<=M;i++){
		for(int j=0;j<=N;j++){
			// Pour mieux différentier les murs du chemin possible
			if(tab[i][j]==-1){printf(" H ");} 
			else{
				printf(" %d ",tab[i][j]);
			}
		}
		printf("\n");
	}

	// Programme genere le plateau
	/***********************************************/

	//Phase d'expansion
	int a, b, flags;
	a=b=flags=0;
	while( tab[Xd+a][Yd+b] != -1 ){ // Tant qu
		if(tab[Xd+a][Yd+b] != -1){
			flags++;
			printf("flags: %d\n", flags);
			tab[Xd+a][Yd+b]=flags;	
		}
	}
	printf("flags: %d",flags);	

}
