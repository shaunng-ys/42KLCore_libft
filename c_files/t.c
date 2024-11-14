#include<string.h>
#include<stdio.h>
/*
void main(void)
{
	size_t n = -1;
	printf("%zu\n",n);
	memset(0,2147483647,-1);
}
*/
#include<stdlib.h>
int main() {
char *name = "Leon";
char *age = NULL;
age = malloc(3);
age[0]= 48;
age[1] = '1';
age[2] = 0;
name[0] = '0';
  return 0;
}
