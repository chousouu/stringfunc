#ifndef SELFMADESTRINGTESTER_H
#define SELFMADESTRINGTESTER_H

void PrintOptions();
int FuncStringDecider(char *commando);
void StringsDecider(int i);
void ResultTeller(int result);
int CompareTestResult(char *tmp1, char*tmp2);


void c_puts(char *s);
int c_strchr();
int c_strlen();
void c_cpy(char *tmp1, char *tmp2, int i);
void c_cat(char *tmp1, char* tmp2, int i);
void c_fgets(char *arr1, char *arr2, FILE *fp);

#endif// SELFMADESTRINGTESTER_H


