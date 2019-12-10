#include <stdio.h>
      
void For(){	
	int f=0,n1,p1, repet=1;
	char C1,C2,n,c,p;

	for(;repet==1;){
		for(;(int)n<48 || (int)n>57 || (int)n%2!=0;){
			printf("Choisir n (0-9): ");
			scanf(" %c", &n);
			while((((c=getchar()) !='\n') && c!=EOF));
		} 
		
		if((int)n-48!=0){
			for(;(int)p<48 || (int)p>57;){
				printf("Choisir p (0-9): ");
				scanf(" %c", &p);
				while((((c=getchar()) !='\n') && c!=EOF));
			}
			
			n1=(int)n-48;
			p1=(int)p-48;
			printf("Val de C1:");
			scanf(" %c", &C1);
			printf("Val de C2:");
			scanf(" %c", &C2);

			for( int i = 1 ; i<=n1*p1 ; i++ ){
				for( int j = 0 ; j<n1 ; j++ ){ 
					for(int k = 0 ; k<p1; k++){ 
						if(f==0){printf("%c",C1);}
						else if(f==1){printf("%c",C2);}
					}
				if(!( (j%2==0) && (j==(n1-1))) ){f=!f;}
				}
			printf("\n");
			if(i%p1==0){f=!f;}
			}
			
		}
		else{repet=0;}
	}
}

void While(){
	int f=0,n1,p1, repet=1, flag=1;
	char C1,C2,n,c,p;
	while(flag == 1){
		while(repet==1){
			while( (int)n<48 || (int)n>57 || (int)n%2!=0 ){
				printf("Choisir n (0-9): ");
				scanf(" %c", &n);
				while((((c=getchar()) !='\n') && c!=EOF));
			} 
			
			if((int)n-48!=0){
				while((int)p<48 || (int)p>57){
					printf("Choisir p (0-9): ");
					scanf(" %c", &p);
					while((((c=getchar()) !='\n') && c!=EOF));
				}
				
				n1=(int)n-48;
				p1=(int)p-48;
				printf("Val de C1:");
				scanf(" %c", &C1);
				printf("Val de C2:");
				scanf(" %c", &C2);
				int i=1
				while( i<=n1*p1 ){
					int j=0
					while(j<n1){ 
						int k=0
						for( k<p1 ){ 
							if(f==0){printf("%c",C1);}
							else if(f==1){printf("%c",C2);}
						}
					if(!( (j%2==0) && (j==(n1-1))) ){f=!f;}
					}
				printf("\n");
				if(i%p1==0){f=!f;}
				i++;
				}
			}
			else{repet=0;}
		}
	flag=0;	
	}
}

char menu(){
	char c,valeur; 
	printf("Voulez-vous afficher le damier :\n\t- en utilisant la structure pour (réponse a ou A)\n\t- en utilisant la structure tant que (réponse b ou B)\n\t- en utilisant la structure pour (réponse c ou C)\n\t- acquérir de nouvelles valeurs pour n, p, C1 et C2 (réponse d ou D)\n");
	printf("Votre choix: ");
	scanf(" %c", &valeur);
	while((((c=getchar()) !='\n') && c!=EOF));
	return valeur;
}

int main(){
	char choix;
	choix=menu();
	while(true){
		if(choix=='a'||choix=='A'){For();}
		if(choix=='b'||choix=='B'){While();}
#if(choix=='a'||choix=='A'){();}
		if(choix=='c'||choix=='C'){For();}
	}
}
