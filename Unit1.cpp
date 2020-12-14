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

int countAnswer(std::string str);
bool isNumber(char ch);

int main()
{
    std::string str;
    int answer;
    char chArr[512];

    printf("Enter your string\n");

    gets(chArr);

    str = chArr;

    countAnswer(str);

    printf("\n\n\nEnter 1 to close application ");
    char ch[20];

    gets(ch);

    return 0;
}






int countAnswer(std::string str)
{


    str += " "; 
    const char *chArr = str.c_str();

    int counter = 0, tmpCounter = 0, strLength = strlen(chArr);



    char num[128];
    for(int i = 0; i < 128; i++)
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

        if( (counter > 0) && (!isNumber(chArr[i])) )
        {
        
            printf("\n\nyour integer number is:\n");
            printf(num);
            return 1;
        }

    }

    if(counter == 0)
    {
        printf("\n\nthere is no integer number\n\n");
    }


    return 1;
}


bool isNumber(char ch)
{
    switch (ch)
    {
        case '0':
        return true;

        case '1':
        return true;

        case '2':
        return true;

        case '3':
        return true;

        case '4':
        return true;

        case '5':
        return true;

        case '6':
        return true;

        case '7':
        return true;

        case '8':
        return true;

        case '9':
        return true;

        default:
        return false;
    }
}
//---------------------------------------------------------------------------
 
