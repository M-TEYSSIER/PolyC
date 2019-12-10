#include <stdio.h>

int main(){
	int entier,i=0;
	char tab[10]={NULL};
	
	printf("Tapez un entier: ");
	scanf("%d", &entier);
	printf("Val: %d\n",entier);
	for(int a=0;a<10;a++){
		printf("%d",tab[a]);
	}
	printf("\n");
	/*while((entier/10)!=0){ // Tant que l'on à pas 0 (NULL)
		tab[i] = (entier%10)+48;
		i++;
	}*/
}
