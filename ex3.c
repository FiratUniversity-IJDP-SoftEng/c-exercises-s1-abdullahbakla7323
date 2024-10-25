#include<stdio.h>
int main(){
		char pet;
		printf("Do you have a cat or dog (cat=1/dog=2) ?");
		scanf("%c",&pet);
		if (pet == '2'){
				printf("Dogs say: woof\n");
		}
		else if (pet == '1'){
				printf("cats say meow\n");
		}else{
				printf("you entered wrong animal");
		}
		return 0;
}
