//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

#pragma argsused

const int MAX_STRING_SIZE = 512;

void fingIntegerNumber(char[]);
bool isNumber(char ch);


int main()
{
    int answer;
    char chArr[MAX_STRING_SIZE];

    printf("Enter your string\n");

    gets(chArr);

    fingIntegerNumber(chArr);

    puts("\n\n\nPress any key ... ");
    getch();
    getch();
    return 0;

}


void fingIntegerNumber(char chArr[])
{
    int //counter = 0,
        startDigIndex = 0,
        strLength = strlen(chArr);

    while(startDigIndex < strLength && ! isNumber(chArr[startDigIndex]))
    {
        startDigIndex++;
    }

    if(startDigIndex < strLength &&
        startDigIndex > 0 &&
        chArr[startDigIndex - 1] == '-')
    {
        printf("-");
    }

    while(startDigIndex < strLength &&  isNumber(chArr[startDigIndex]))
    {
            printf("%c", chArr[startDigIndex++]);
    }
    ;  
}


bool isNumber(char ch)
{
    return (ch >= '0'  && ch <= '9');

}
//---------------------------------------------------------------------------
 




