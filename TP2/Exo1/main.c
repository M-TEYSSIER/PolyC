#include <stdio.h>

main(){
	char tableau[20]={NULL};
	int i;
	printf("Ecrivez votre chaine de caractères:\n");
	scanf("%s", tableau);
	for(i=0;tableau[i]!='\0' ;i++){
		printf("%c ", tableau[i]);
	}
	printf("\nChaine de: %d caractères.\n", i);
}
