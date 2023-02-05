//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Read this file's content in a buffer using File IO api's
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

/*******************************************************************
    Function name :  DisplayData
    Description   :  Used ia Display Data of string
    Parameters    :  character array
    Return Value  :  void
*********************************************************************/
void DisplayData(char Fname[])
{
    int fd = 0;     
    int iRet = 0;
    char Data[100];     

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;  // Failure
    }
    printf("File is succefully opened with FD %d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);
    }
    close(fd);
}

int main(void)
{
    char FileSize[100];
    
    printf("\n----------------------------\n");
    printf("Enter the file name to open : \n");
    printf("------------------------------\n");
    scanf("%s",FileSize);

    DisplayData(FileSize);


    return(0);
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//   Output:
//     ----------------------------
//      Enter the file name to open :
//     ------------------------------
//     Test.txt
//     File is succefully opened with FD 3
//     "Hello World,Welcome to Pune"   
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
