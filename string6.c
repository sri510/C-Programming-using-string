/*
Write a program in C to find the largest and smallest words in a string.
Test Data :
Input the string : I Love My India. 
Expected Output :
The largest word is 'India'
and the smallest word is 'I' 
in the string : 'I Love my India.'. 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100], word[20], mx[20], mn[20], c;
    int i = 0, j = 0, flg = 0;
	
	printf("Input the string : ");
    i = 0;
    do
    {
        fflush(stdin);
        c = getchar();
        str[i++] = c;
 
    } while (c != '\n');
    str[i - 1] = '\0';
    for (i = 0; i < strlen(str); i++)
    {
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i]))
        {
            word[j++] = str[i++];
        }
        if (j != 0)
        {
            word[j] = '\0';
            if (!flg)
            {
                flg = !flg;
                strcpy(mx, word);
                strcpy(mn, word);
            }
            if (strlen(word) > strlen(mx))
            {
                strcpy(mx, word);
            }
            if (strlen(word) < strlen(mn))
            {
                strcpy(mn, word);
            }
            j = 0;
        }
    }
    printf("The largest word is '%s' \nand the smallest word is '%s' \nin the string : '%s'.\n", mx, mn, str);
 }

