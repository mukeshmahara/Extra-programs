#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int x,l1,l2,l3;
	printf("Enter two string constant:");
	scanf("%s %s",s1 ,s2);
	/*x=strcmp(s1,s2);
	if(x!=0){
		printf("\n\nThe string are not equal\n");
		strcat(s1,s2);
		
	}
	else
	*/printf("\n\nThe strings are equal\n");
	strcpy(s3,s1);
	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);
	printf("s1=%s\t \tlength =%d characters\n",s1,l1);
	printf("s2=%s\t length =%d characters\n",s2,l2);	printf("s3=%s\t \tlength =%d characters\n",s3,l3);
	getch();
	return 0;
}
