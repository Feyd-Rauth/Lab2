#include <stdio.h>
#include <string.h>
int main(){
	char str[100], rev[100];
	
	fgets(str, 100, stdin);

	int i;
	int len = strlen(str);
	int end = len - 1;

	for(i = 0; i < len; i++){
		rev[i] = str[end];
		end--;
	}
	rev[i] = '\0';

	printf("%s\n", rev);
}