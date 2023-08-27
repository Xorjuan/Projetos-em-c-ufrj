#include<stdio.h>
	
	int fatorial(int a){
		if(a==1||a==0){
			return 1;
		}else{
			return a*fatorial(a-1);
		}
		
	}

	int main(){
		int entrada,receba;
		scanf("%d", &entrada);
		receba=fatorial(entrada);
		printf("%d %d", entrada, receba);
		return 0;
	}