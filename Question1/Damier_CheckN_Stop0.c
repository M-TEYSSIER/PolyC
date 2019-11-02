#include <stdio.h>
      
int main(){	
	int f=0,n1,p1, repet=1;
	char C1,C2,n,c,p;

	while(repet==1){
		// N
		do{
			printf("Choisir n (0-9): ");
			scanf(" %c", &n);
			while((((c=getchar()) !='\n') && c!=EOF));
			// Permet de vider le buffer pour ne pas avoir une suite de valeur pour les autres questions.
			// On aurait pu créer un tableau que l'on met en evidence dans le scanf et le traiter
			// par la suite. Par contre, c'est plus long.
		}while( (int)n<48 || (int)n>57 || (int)n%2!=0);
		// Tant que n n'est pas entre 0-9 et paire et différent de 0 Si 0 ça kill le prog

		
		if((int)n-48!=0){
			// P
			do{
				printf("Choisir p (0-9): ");
				scanf(" %c", &p);
				while((((c=getchar()) !='\n') && c!=EOF));
			}while((int)p<48 || (int)p>57);
			
			n1=(int)n-48;
			p1=(int)p-48;

		/* 1iere etape (sans verif d'entree)
			printf("Nb lignes (n) : \n");
			scanf("%d", &n);
			printf("Nb repet (p) :\n");
			scanf("%d", &p);
		*/	printf("Val de C1:");
			scanf(" %c", &C1);
			printf("Val de C2:");
			scanf(" %c", &C2);
		//	printf("%d - %d - %c - %c\n\n",n,p,C1,C2);


			for( int i = 1 ; i<=n1*p1 ; i++ ){ // Nb lignes
				for( int j = 0 ; j<n1 ; j++ ){ // Nb repect de struct/ligne
					for(int k = 0 ; k<p1; k++){ // Nb repet de caract/bloc
						if(f==0){printf("%c",C1);}
						else if(f==1){printf("%c",C2);}
					}
				if(!( (j%2==0) && (j==(n1-1))) ){f=!f;}
				}
			printf("\n");
			if(i%p1==0){f=!f;}
			}
		}
		else{repet=0;} // Kill le prog
	}
}
