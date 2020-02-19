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

void LUT(char *cle, char tab[26]){
	// La cle va débuter l'alphabet et creer la suite de l'alphabet 
	// en omettant les lettres presentent dans la cle.
	strcat(tab,cle);
	printf("%s\n",tab);

	for(int i=0; i<strlen(cle); i++){
		printf("%c",tab[i]);	
	}
	printf("\n");	
	printf("strlen(cle): %ld\n", strlen(cle)-1);

	for(int i=strlen(cle);i<26;i++){
		char lettre ='A'-1;
		int flags=1;
		while(flags != 0){ 
			flags=0;
			// Gestion de lettres deja dans le Tab[]
			lettre++;
			for(int a=i; a >= 0; a--){
				if((int)tab[a]==lettre){
					flags++;
				}
			}
		}
		tab[i]=(char)lettre;
	}
	printf("print char by char:");
	for(int i=0;i<26;i++){
		printf("%c",tab[i]);
	}
	printf("\nprint string %s\n", tab);
}

void EncryptLigne3(char *T, char *cle){
	// T est un tab qui va etre chiffre avec l'alphabet modifier via cle
	printf("EL3-cle: %s\n", cle);
	for(int i = 0; i<strlen(cle)-1;i++){
		printf("%c",cle[i]);
	}
	printf("\n");
}

void EncryptFile(FILE *in, FILE *out, int methode){
	// Chiffrement par César, décalage ou substitution avec cle de chiffrement
	// Choix par l usager
	char chaine[100];
	while(feof(in)){
		fgets(chaine,100,in);
	}
	switch(methode){
		case 1:
			printf("Méthode César");
			EncryptLigne1(chaine);
			break;
		case 2:
			printf("Méthode par décalage via clé.\n");
			printf("Veuillez saisir la clé pour le décalage: ");
			char b[50];
			scanf("%s", b);
			EncryptLigne3(chaine, b);
			break;
		case 3:
			printf("Méthode par substitution avec clé de chiffrement");
			break;
	}
	strcpy(out, chaine); 
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
	char cle[] = "ZEPHIR";
	char tableauLUT[26]="";
	LUT(cle, tableauLUT);
	printf("main: %s\n", tableauLUT);
	EncryptLigne3(Tab, tableauLUT);	
	// Ajout du menu de selection de methode de chiffrement 
	// afin de chiffrer le fichier
	int a=0;
	printf("Quel méthode de chiffrement souhaitez vous?\n1/ Code César\n2/Décalage\n3/Substiution avec clé de chiffrement\nRéponse:");
	scanf("%d", &a);
	printf("\n");
	char FichierEnClair[200]="";
	printf("Veuillez saisir le chemin de votre fichier:");
	scanf("%s",FichierEnClair);
	char FichierChiffre[]="Fichier.Encrypt";
	//strcat(FichierChiffre, FichierEnClair);
	//strcat(FichierChiffre, ".encrypt");
	FILE *filein = fopen(FichierEnClair, "r");
	FILE *fileout= fopen(FichierChiffre, "w");
	EncryptFile(filein, fileout, a);
	return 0;
}

