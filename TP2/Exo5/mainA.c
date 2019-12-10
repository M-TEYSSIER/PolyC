#include <stdio.h>

int main(){
	char c, E1[4]={NULL};
	printf("Entrée 4 caractère pour le test:\n");
	scanf("%s",E1);
	while((((c=getchar()) !='\n') && c!=EOF));
	int flags=0;
	for(int i=0;i<4/2;i++){
		if(E1[i]!=E1[3-i]){
			flags++;
		}
	}
	if(flags!=0){
		printf("Ce n'est pas un palindrome\n");
	}	
	else{
		printf("C'est un palindrome\n");
	}
}
