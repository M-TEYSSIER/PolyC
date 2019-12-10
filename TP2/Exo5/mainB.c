#include <stdio.h>

int main(){
	char E1[11]={NULL};
	printf("Entrée 19 caractères pour le test:\n");
	scanf("%11c",E1);
	int flags=0;

	for(int i=0; i<=sizeof(E1);i++){
		printf("%c",E1[i]);
	}
	printf("\nsizeof(E1):%d \n", sizeof(E1));
	
	for(int i=0; i<sizeof(E1); i++){
		
	}
/*
	if(flags!=0){
		printf("Ce n'est pas un palindrome\n");
	}	
	else{
		printf("C'est un palindrome\n");
	}
*/
}
