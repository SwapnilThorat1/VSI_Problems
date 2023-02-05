//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Write a program to add the following string to the end of file Test1.txt
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
    char Fname[20];
    char Data[100];
    int fd1 = 0;     // File descriptor
    int fd2 = 0;
    int iRet = 0;
    printf("----------------------------\n");
    printf("Enter file name to open ==> \n");
    printf("----------------------------\n");
    scanf("%s",Fname);

    fd1 = open(Fname,O_RDWR);
    if(fd1 == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }
   
    printf("File is succefully opened with FD %d\n",fd1);
    
    printf("\n----------------------------------------------\n");
    printf("Enter All the data that you want to write ==>\n");
    printf("----------------------------------------------\n");
    scanf(" %[^'\n']s",Data);

    iRet = write(fd1,Data,strlen(Data));
    printf("%d bytes gets succesfully written in the file\n",iRet);

    fd2 = open(Fname,O_RDWR | O_APPEND);
    if(fd2 == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }
    printf("File is succefully opened with FD %d\n",fd2);

    
    printf("\n----------------------------------------\n");
    printf("Write the data that you want to end of String ==>\n");
    printf("------------------------------------------\n");
    scanf(" %[^'\n']s",Data);

    iRet = write(fd2,Data,strlen(Data));
    printf("%d bytes gets succesfully written in the file\n",iRet);
   
    return(0);
}

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Output:
// ----------------------------
// Enter file name to open ==>
// ----------------------------
// Test.txt
// File is succefully opened with FD 3

// ----------------------------------------------
// Enter All the data that you want to write ==>
// ----------------------------------------------
// "Hello World,Welcome to Pune,
// 29 bytes gets succesfully written in the file
// File is succefully opened with FD 4

// ----------------------------------------
// Write the data that you want to end of String ==>
// ------------------------------------------
// Maharastra"
// 11 bytes gets succesfully written in the file

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.*/