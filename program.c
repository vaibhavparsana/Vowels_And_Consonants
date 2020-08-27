#include<stdio.h>
#include<string.h>
#include <ctype.h>
main(){
	int i;
	int vowels=0;
	int consonants=0;
	char string[100];
	
	
	printf("Enter a string: ");
	gets(string);
	
	
	int length = strlen(string);
	
	for(i=0;i<=length;i++){
		
		char c = string[i];
		c = toupper(c);
	
		if((c >= 'A' && c <= 'Z')){
			if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
			 	vowels++;
			}else {
			 	consonants++;
			}
		}
	 
	}
	
	printf("The number of vowels is %d",vowels);
	printf("\nThe number of consonants is %d",consonants);
}
