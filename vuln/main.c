#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stack>


//#include <sys/socket.h>

int main(int argc, char *argv[])
{

    char buff[256];
    printf("enter number >>>>");
    scanf("%f",buff);
    memcpy(buff,argv[1],strlen(argv[1]));
    printf(buff);

    return 0;
}


