/*////////////////////////////////////////////////////////////////////////////
    Write a program to add the followinf string to the end end of file test.txt
     ,"Maraharastra"  Hence the modified Test.txt should look like.
     Step 1==>
     "Hello World,Welcome to Pune,
*//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main(void)
{
    char Fname[20];
    char Data[100];
    int fd = 0;     
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }

    printf("File is succefully opened with FD %d\n",fd);

    printf("Enter the data that you want to write : \n");
    scanf(" %[^'\n']s",Data);

    iRet = write(fd,Data,strlen(Data));

    printf("%d bytes gets succesfully written in the file\n",iRet);

    return(0);
}

/***************************************************/
//   Output:
//   Enter file name to open
//   Test1.txt
//   File is succefully opened with FD 3
//   Enter the data that you want to write :
//   "Hello World,Welcome to Pune,
//   13 bytes gets succesfully written in the file
//
/**************************************************/