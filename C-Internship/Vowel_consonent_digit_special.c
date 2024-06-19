#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char string[100];
	int s=0,i=0,v=0,c=0,sc=0,d=0;
	printf("enter the string ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='O'||string[i]=='U'||string[i]=='I')
		v++;
		else if(string[i]>='0'||string[i]<='9')
		d++;
		else if(string[i]==' ')
		s++;
		else if((string[i]>='a'&&string[i]<='z')||(string[i]>='A' && string[i]<='Z' ))
		c++;
		else
		sc++;
	}
	printf("VOWELS           : %d\n",v);
	printf("CONSONENT        :%d\n",d);
	printf("DIGITS           :%d\n",c);
	printf("SPACE            :%d",s);
	return 0;
}
