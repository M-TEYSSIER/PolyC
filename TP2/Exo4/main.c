#include <stdio.h>

int main(){
	char c, E1[20]={NULL},E2[20]={NULL};
	printf("Entrée 1:\n");
	scanf("%s",E1);
	while((((c=getchar()) !='\n') && c!=EOF));
	printf("Entrée 2:\n");
	scanf("%s",E2);
	while((((c=getchar()) !='\n') && c!=EOF));
	int j=0;
	for(int i=0;i<20;i++){
		if(E1[i]!=E2[i]){
			j++;
		}
	}
	if(j!=0){
		printf("Les deux entrées ne sont pas identiques.\n");
	}
	else{printf("Les deux entrées sont identiques\n");}
}
