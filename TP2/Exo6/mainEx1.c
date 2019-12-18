#include <stdio.h>
#include <string.h>

main(){
	char tableau[20]={NULL};
	printf("Ecrivez votre chaine de caractères:\n");
	scanf("%s", tableau);
	printf("\nChaine de: %d caractères.\n", strlen(tableau));
}
