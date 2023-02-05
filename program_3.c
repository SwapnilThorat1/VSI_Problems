//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Write a program to store this string "India is my country" Then 
// concate another string "All indians are my brothers and sisters"
//  Print the updated string and its length
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

/*********************************************************************
    Function Name  :      Mystrcat
    Description    :      Used to  concate two strings
    Input          :      character pointer,character pointer
    Output         :      character pointer
    Date           :      05/02/2023
    Author         :      Swapnil Harishchandra Thorat
*********************************************************************/

char* Mystrcat(char * dest, char *src)
{
	while(*dest !='\0')
	{
		dest++;
	}
	while(*src!='\0')
	{
		*dest = *src;
	  	 dest++;
		 src++;
	}
	*dest='\0';
	return dest;
}

/*******************************************************************
    Function name :  strlenx
    Description   :  Used ia Find the length of string1 and string2
    Parameters    :  character pointer,character pointer
    Return Value  :  void
*********************************************************************/

void strlenx(char * str1, char * str2)
{
    int len1=0,len2=0;
    while(1)
    {
        if(*str1 == '\0' && *str2 == '\0')
        {
            break;
        }
        if(*str1 != '\0')
        {
            str1++;
            len1++;
        }
        if(*str2 != '\0')
        {
            str2++;
            len2++;
        }
    }
    printf("Length of First String is ==> %d\nLength of Second String is ==> %d\n",len1,len2);
}

int main(void)
{
    char str_data1[] = " All Indian Are My Borthers And Sister";
	char str_data2[] = "India Is My Country";

	strlenx(str_data1,str_data2);

    Mystrcat(str_data2,str_data1);
    printf("String Concate is ==> %s",str_data2);

    return(0);
}

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    Output:
        Length of First String is ==> 38
        Length of Second String is ==> 19
        String Concate is ==> India Is My Country All Indian Are My Borthers And Sister

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/