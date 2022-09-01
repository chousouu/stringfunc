#include "strings.h"
#include "SelfmadeStringTester.h"

int main()
{
    char commando[10] = "";
    int check_if_leave = 1;

    while(check_if_leave)
    {
        PrintOptions();
        scanf("%s", commando);
        check_if_leave = FuncStringDecider(commando);
    }

}
