#include <stdio.h>
      
int main(){	
	int f=0,n,p;
	char C1,C2;

	// 1iere etape (sans verif d'entree)
	printf("Nb lignes (n) : \n");
	scanf(" %d", &n);
	printf("Nb repet (p) :\n");
	scanf(" %d", &p);
	printf("Val de C1:");
	scanf(" %c", &C1);
	printf("Val de C2:");
	scanf(" %c", &C2);
	//	printf("%d - %d - %c - %c\n\n",n,p,C1,C2);


	for( int i = 1 ; i<=n*p ; i++ ){ // Nb lignes
		for( int j = 0 ; j<n ; j++ ){ // Nb repect de struct/ligne
			for(int k = 0 ; k<p; k++){ // Nb repet de caract/bloc
				if(f==0){printf("%c",C1);}
				else if(f==1){printf("%c",C2);}
			}
		if(!( (j%2==0) && (j==(n-1))) ){f=!f;}
		}
	printf("\n");
	if(i%p==0){f=!f;}
	}
}
