/*program related to concatenation*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	char first_name[10]={"OM"},second_name[10]={"PRAKASH"},last_name[10]={"MAHARA"},name[100];
	/*Copy first name into name*/
	for(i=0;first_name[i]!='\0';i++)
	{
		name[i]=first_name[i];
	
}
	name[i]=' ';
	for(j=0;second_name[j]!='\0';j++){
		name[i+j+1]=second_name[j];
}
	/*End second_name with a space*/
	name[i+j+1]=' ';
	/*copy last_name into name*/
	for(k=0;last_name[k]!='\0';k++){
	
	name[i+j+k+2]=last_name[k];}
	/*End name with a null character*/
	name[i+j+k+2]='\0';
	


	printf("\n\n");
	printf("%s\n",name);
	
}
