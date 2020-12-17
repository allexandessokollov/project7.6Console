//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------
#include <string.h>
#include <string>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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
    int counter = 0, strLength = strlen(chArr);

    for(int i = 0; i < strLength; i++)
    {

        if(isNumber(chArr[i]))
        {
            if(i > 0 && chArr[i - 1] == '-')
            {
                printf("%c", chArr[i - 1]);
            }
           
            printf("%c", chArr[i]);
            counter++;
        }

        if( (counter > 0) && (i == strLength - 1 || !isNumber(chArr[i])))
        {
            break;
        }
    }

    if(counter == 0)
    {
        printf("\n\nthere is no integer number\n\n");
    }
}

bool isNumber(char ch)
{
    return (ch >= '0'  && ch <= '9');
}
//---------------------------------------------------------------------------
 




