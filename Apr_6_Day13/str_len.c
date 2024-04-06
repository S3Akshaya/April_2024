//find the length of string

#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i;
	scanf("%s",s);
	for(i=0;s[i]!= '\0';i++);
	printf("Length is %d",i);
}
