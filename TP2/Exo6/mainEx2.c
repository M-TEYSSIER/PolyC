#include <stdio.h>
#include <math.h>

int main(){
	char c,tableauC[10]={NULL};
	int i,flags, tableauI[10];
	i=flags=0;
	// A.
	while( flags==0 && i<10 ){ 
		printf("Caractère:");
		scanf("%c", &tableauC[i]);
		while((((c=getchar()) !='\n') && c!=EOF));
		if((tableauC[i] < 48) || (tableauC[i] < 58)){
			i++;
		}
		else{flags=1;printf("ERROR");}
	}
	// B.
	printf("Tab I :\n");
	for(i=0;i<10 && flags==0;i++){
		tableauI[i]=atoi(tableauC[i]);
		printf("%d ",tableauI[i]);
	}
	printf("\n");
	// On aurais pu aussi, créer le tableau d'entier en même
	// temps que le tableau de char. Ainsi, on éviterais 
	// la deuxième boucle.
	
	// C.
	printf("Taper un nombre:\n");
	char nombre[3];
	int a=0;
        int chiffre[3];
	scanf("%s", nombre);
	for(i=2;i>=0;i--){
		chiffre[i]=nombre[i];
		printf("n:%d - i:%d\n",nombre[i],i);
		a=a+(pow(10,((double)sizeof(nombre)-(double)i-1))*(atoi(chiffre[i])));
		printf("pow s %d\n",a);
	}
	printf("%d\n", a);
}
