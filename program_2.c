/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    Store the string then concatenate another string "All 
    Indian are my brother and sister"
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int main(void)
{
    char str1[FILESIZE] = "India is my country";
    char str2[FILESIZE] = "All indians are my brother";

    printf("String_1 = %s\n",str1);
    printf("String_2 = %s\n",str2);

    return(0);
}

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    Output:
    String_1 = India is my country
    String_2 = All indians are my brother

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/