#include <stdio.h>
#include <math.h>

int main(){
	int entier,puissance=0,i;
	char tab[10]={NULL};
	
	printf("Tapez un entier: ");
	scanf("%d", &entier);
	printf("Entier= %d\n",entier);

	for(int a=0;a<10;a++){
		printf("%d",tab[a]);
	}
	printf("\n");
	int entierOLD = entier;		
	while( entierOLD != 0){ // Permet de trouver la puissance de 10 du nombre
	       		     // Ainsi on traiterais le nombre de caractères
			     // en conséquences
		entierOLD=entierOLD/10;
		printf("Entier=%d\n",entierOLD);
		puissance++;
	}
	// Maintenant que nous avons le nombres de chiffres dans notre nombre
	// nous allons convertir chaques chiffres en caractère:
	int test1,test2,test3;
	for(i=0; i<puissance; i++){
		test1 = entier%(int)pow(10,i+1);
		test2 = test1/(int)pow(10,i);
		test3 = test2 + 48;
		//printf("test1 : %d \n test2: %d \n test3 : %d\n", test1,test2,test3);
		tab[i] = (char)test3;
	}

	for(i=puissance;i>=0;i--){
		printf("%c",(int)tab[i]);
	}
	printf("\n");
}
