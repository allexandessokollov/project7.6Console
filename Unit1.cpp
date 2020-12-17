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

const int MAX_ANSWER_SIZE = 128,
MAX_STRING_SIZE = 512,
MAX_BUFFER_SIZE = 512;

void fingIntegerNumber(char[]);
bool isNumber(char ch);

int main()
{

    int answer;

    char chArr[MAX_STRING_SIZE];

    printf("Enter your string\n");

    gets(chArr);

    fingIntegerNumber(chArr);


    puts("\nPress any key ... ");
    getch();
    getch();
    return 0;
}






void fingIntegerNumber(char chArr[])
{


    int counter = 0,strLength = strlen(chArr);

    char num[MAX_ANSWER_SIZE];


    for(int i = 0; i < MAX_ANSWER_SIZE; i++)
    {
        num [i] = ' ';
    }

    for(int i = 0; i < strLength; i++)
    {

        if(isNumber(chArr[i]))
        {
            num[counter] = chArr[i];
            counter++;

            if(i > 0)
            {
               if(chArr[i - 1] == '-')
               {
                   num[counter] = num[counter - 1];
                   num[counter - 1] = chArr[i - 1];
                   counter++;
               }

            }
        }

        if( (counter > 0) && (i == strLength - 1 || !isNumber(chArr[i])))
        {
        
            printf("\n\nyour integer number is:\n");

            for(int i = 0; i < MAX_ANSWER_SIZE; i++)
            {
                if(num[i] != ' ')
                {
                    printf("%c" ,num[i]);
                }

            }

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
    return ch >= '0'  && ch <= '9';

}
//---------------------------------------------------------------------------
 




