#include <stdio.h>
void swap(int *a, int* b);
int main(){
	int a,b;
	scanf("%d%",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d%d\n", a ,b);
	
}
void swap(int *a, int* b){
	*a = *a^*b;
	*b = *b^*a;
	*a = *a^*b;
}