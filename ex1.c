#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
	int number = INT_MAX;
	float fnumber = FLT_MAX;
	double dnumber = DBL_MAX;
	printf("%d\n%d\n%d\n", sizeof(number), sizeof(fnumber), sizeof(dnumber));
	printf("%d\n%.1f\n%.1f\n", number, fnumber, dnumber);
}