// Décalage pour n'importe quelle valeur:
// (Caractère+Décalage)%26
// [Chiffrement +(26-décalage)]%26
#include <stdio.h>
#include <string.h>

void EncryptLigne1(char *T){
	for(int i=0; i < strlen(T);i++){
		if((T[i]>96 && T[i]<123)  ){
			T[i]=((T[i]-96+13)%26)+96;
			printf("%c", T[i]);
		}
		if((T[i]>64 && T[i]<91)){
			T[i]=((T[i]-64+13)%26)+64;
			printf("%c", T[i]);
		}
	}
}

void Decrypt(char *T){
	for(int i=0; i < strlen(T);i++){
		if((T[i]>96 && T[i]<123)){
			T[i]=((T[i]-96+13)%26)+96;
			printf("%c", T[i]);
		}
		if((T[i]>64 && T[i]<91)){
			T[i]=((T[i]-64+13)%26)+64;
			printf("%c", T[i]);
		}
	}
}

int main(){
	char Tab[]="testTEST";
	EncryptLigne1(Tab);
	printf("\n");
	Decrypt(Tab);
	printf("\n");
	return 0;
}

