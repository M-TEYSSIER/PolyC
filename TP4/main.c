// Décalage pour n'importe quelle valeur:
// (Caractère+Décalage)%26
// [Chiffrement +(26-décalage)]%26
#include <stdio.h>
#include <string.h>

void EncryptLigne2(char *T, int dec){
	for(int i=0; i < strlen(T);i++){
		if((T[i]>96 && T[i]<123)  ){
			T[i]=((T[i]-96+dec)%26)+96;
			printf("%c", T[i]);
		}
		if((T[i]>64 && T[i]<91)){
			T[i]=((T[i]-64+dec)%26)+64;
			printf("%c", T[i]);
		}
	}
}

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

char** LUT(char *cle){
	// La cle va débuter l'alphabet et creer la suite de l'alphabet 
	// en omettant les lettres presentent dans la cle.
	char Tab[26];
	strcat(Tab, cle);
	//Tab+=cle;
	int flags=0, lettre=64;
	for(int i=strlen(cle);i<26;i++){
		while(flags != 0){ // Gestion de lettres deja dans le Tab[]
			lettre++;
			for(int a=i-1; a != 0; a--){
				if((int)Tab[a]==lettre){
					flags++;
				}
			}
		}
		Tab[i]=(char)lettre;
	}
	for(int i=0;i<26;i++){
		printf("%c",Tab[i]);
	}
	printf("\n");
	return *Tab;
}

int main(){
	char Tab[]="testTEST";
	EncryptLigne1(Tab);
	printf("\n");
	Decrypt(Tab);
	printf("\n");
	// Définir le décalage (X) dans la fonction EncryptLigne2(Tab, X);
	EncryptLigne2(Tab, 3);
	printf("\n");
	LUT("macle");	
	return 0;
}

