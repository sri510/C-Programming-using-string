/*
Write a program in C to remove characters from a string except alphabets.
Input the string : Ranchi2
Expected Output :
After removing the Output String : Ranchi
  */
#include <stdio.h>
#include <string.h>
void main(){
    char str[150];
    int i,j;
	
	printf("Input the string : ");
    fgets(str,sizeof str,stdin);	
    for(i=0; str[i]!='\0'; ++i)
    {
        while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
        {
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    printf("After removing the Output String : %s\n\n",str);
}
