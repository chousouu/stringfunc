#ifndef STRINGS_H
#define STRINGS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline

int puts_my(const char *s);//Writes every character from the null-terminated string str and one additional newline character '\n' to the output

char *strchr_my(char *s, char c);// Finds the first occurrence of "char c" in string [s]

int strlen_my(const char *s);//Returns the length of the given string

char *strcpy_my(char *copy_to, const char* copy_from);//copies string copy_from to string copy_to
char *strncpy_my(char *copy_to, char* copy_from, int n);// similiar to strcpy but has max. amount of chars that can be copied

char *strcat_my(char *s_to, char *s_from);//puts string s_from to the end(starting from \0) of s_to
char *strncat_my(char *s_to, char *s_from, int n);// same as strcat but with max. amount of chars.. .

char *fgets_my( char *str, int count, FILE *stream );// Reads at most count-1 chars from the given file stream and stores them in the char array pointed to by str.

char *strdup_my(char *str1);// duplicates string (by using dynamic memory)

//char *getline_my(char *str1, int max_count, char delim);


#endif//STRINGS_H