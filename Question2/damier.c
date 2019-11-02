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

int main(){
	For();
}
