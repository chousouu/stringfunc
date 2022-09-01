#include "strings.h"
#include "SelfmadeStringTester.h"

char arr[] = "S 8 marta, devochki!";    

char options[][15] =
{
    "puts"   , "strchr" , "strlen",
    "strcpy" , "strncpy", "strcat",
    "strncat", "fgets"  , "strdup"
};


void FuncStringDecider()
{
    char commando[10] = "";

    PrintOptions();
    scanf("%s", commando);

    for(int i = 0; i < 9; i++)
    {
        if (strcmp(commando, options[i]) == 0)
        {
            StringsDecider(i);
        }    
    }
}
    

void StringsDecider(int i)
{
    int result = 0;
    if (i == 0)
    {
        c_puts(arr);
    }
    if (i == 1) //strchr
    {
        ResultTeller(c_strchr());
    }
    else if(i == 2) //strlen
    {
        ResultTeller(c_strlen());
    }
    else if(i == 3 || i == 4)
    {
        char tmp1[100] = "";
        char tmp2[100] = "";
        c_cpy(tmp1, tmp2, i);
        ResultTeller(CompareTestResult(tmp1, tmp2));
        
    }
    else if(i == 5 || i == 6)
    {
        char tmp1[100] = "(And Parni!)";
        char tmp2[100] = "(And Parni!)";
        c_cat(tmp1, tmp2, i);
        ResultTeller(CompareTestResult(tmp1, tmp2));
    }
    else if (i == 7) //fgets
    {
        FILE *fp = fopen("filik.txt", "r");
        char arr1[30] = "";
        char arr2[30] = "";

        c_fgets(arr1, arr2, fp);

        ResultTeller(CompareTestResult(arr1, arr2));
    }
    else if(i == 8)
    {
        char *arr1 = strdup(arr);
        char *arr2 = strdup_my(arr);

        ResultTeller(CompareTestResult(arr1, arr2));
    }
}

void c_puts(char *s)
{
    printf("puts   : ");
    puts(s);

    printf("puts_my: ");
    puts_my(s);
}

int c_strchr()
{
    char letter = '!';

        printf("What letter u want to find?");
        scanf(" %c", &letter);
        
        if(strchr(arr, letter) == NULL)
        {
            printf("Theres no letter like that!\n");
            return 0;
        }

        printf("strchr %c %p\n", *strchr(arr, letter), strchr(arr, letter));
        printf("strchr my %c %p\n", *strchr_my(arr, letter), strchr_my(arr, letter));

        return (strchr(arr, letter) == strchr_my(arr, letter));
}

int c_strlen()
{
    size_t len = strlen(arr);
    size_t len_my = strlen_my(arr);
    printf("strlen_my: %zu\n", len_my);
    printf("strlen   : %zu\n", len);

    return (len_my == len);
}

void c_cpy(char *tmp1, char *tmp2, int i)
{
    if (i == 3)
    {
        strcpy(tmp1, arr);
        strcpy_my(tmp2, arr);
    }
    else 
    {
        strncpy(tmp1, arr, 4);
        strncpy_my(tmp2, arr, 4);
    }
}

void c_cat(char *tmp1, char* tmp2, int i)
{
    if(i == 5)
    {
        strcat(tmp1, arr);
        strcat_my(tmp2, arr);
    }
    else 
    {
        strncat(tmp1, arr, 5);
        strncat_my(tmp2, arr, 5);
    }
}

void c_fgets(char *arr1, char *arr2, FILE *fp)
{
    fgets(arr1, 10, fp);
    rewind(fp);
    fgets_my(arr2, 10, fp);
}

int CompareTestResult(char *tmp1, char*tmp2)
{  
    printf("tmp 1 %s %p \n", tmp1, tmp1);
    printf("tmp 2 %s %p \n", tmp2, tmp2);

    return (strcmp(tmp1, tmp2) == 0);
}

void ResultTeller(int result)
{
    if (result)
    {
        printf("Test COMPLETED\n");
    }
    else 
    {
        printf("Test FAILED\n");
    }
}

void PrintOptions()
{
    printf("Type one of the following command to test it:\n");
    printf("1.puts     2.strchr    3.strlen\n");
    printf("4.strcpy   5.strncpy   6.strcat\n");
    printf("7.strncat  8.fgets     9.strdup\n");
}