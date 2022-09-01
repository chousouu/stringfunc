#include "strings.h"
#include "SelfmadeStringTester.h"

int main()
{
    char commando[10] = "";
    int check = 1;

    while(check)
    {
        PrintOptions();
        scanf("%s", commando);
        check = FuncStringDecider(commando);
    }

}
