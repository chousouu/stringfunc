#include "strings.h"

int puts_my(const char *s) 
{
    int number = 0;
    
    while (*(s+number) != '\n' && *(s+number) != '\0' )
    {
        printf("%c", s[number]);
        number++;
    }

    printf("\n");

    return 1;
}

char *strchr_my(char *s, char c)  
{
    int number = 0;

    while(s[number] != '\n' && s[number] != '\0')
    {
        if (s[number] == c)
        {
            return &s[number];
        }
        number++;
    }
    
    return NULL;
}

int strlen_my(const char *s)  
{
    int counter = 0;

    while(s[counter] != '\0')
    {
        counter++;
    }

    return counter;
}

char *strcpy_my(char *copy_to, const char* copy_from) 
{
    int i = 0;
    for (i = 0; copy_from[i] != '\0'; i++)
    {
        copy_to[i] = copy_from[i];
    }
    for ( ; i < strlen(copy_from); i++)
    {
        copy_to[i] = '\0';
    }
    
    return copy_to;
}

char *strncpy_my(char *copy_to, char* copy_from, int n) 
{
    int i;
    for (i = 0; i < n && copy_from[i] != '\0'; i++)
    {
        copy_to[i] = copy_from[i];
    }
    for ( ; i < n; i++)
    {
        copy_to[i] = '\0';
    }
    
    return copy_to;
}

char *strcat_my(char *s_to, char *s_from) 
{
    int number = 0;
    while(s_to[number] != '\0')
    {
        number++;
    }
    for (int i = 0; s_from[i] != '\0'; i++)
    {
        *(s_to + number + i) = *(s_from + i);
    }

    return s_to;
}

char *strncat_my(char *s_to, char *s_from, int n)
{
    int number = 0;

    while(s_to[number] != '\0')
    {
        number++;
    }
    for (int i = 0; i < n && s_from[i] != '\0'; i++)
    {
        *(s_to + number + i) = *(s_from + i);
    }

    return s_to;
}

char *fgets_my(char *str, int count, FILE *fp) 
{
    if (count == 1)
    {
        str[0] = '\0';
        return str;
    }

    if(fp && (count > 1))
    {
        int ch = ' ';
        int i = 0;
        for(i = 0; (ch = getc(fp)) != '\n' && ch != EOF && i < count-1; i++)
        {
            str[i] = ch;
            //printf("%d%c ", i, str[i]); 
        }
        str[++i] = '\0';
        return str;
    }
    else 
    {
        return NULL;
    }
}

char *strdup_my(char *str1)
{
    char *new_str1 = (char*)malloc(strlen(str1));
    
    strcpy(new_str1, str1);
    
    return new_str1;
}








/*
char *getline_my(char *str1, int max_count, char delim)
{
    int i = 0;
    char c = ' ';

    c = getchar();
    for(i = 0; str1[i] != EOF && c != delim && i < max_count; i++)
    {   
        str1[i] = c;
        c = getchar();
    }
    
    while(getchar() != '\n')
    {
        continue;
    }

    return str1;
}
*/