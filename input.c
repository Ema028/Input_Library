#include "input.h"
#include <stdio.h>
#include <stdlib.h>

char* text = NULL;

void free_memory(void)
{
    free(text);
}

char* get_string(void)
{
    size_t len = 0; 
    ssize_t read;

    read = getline(&text, &len, stdin);
    return text;
    atexit(free_memory);
}

int get_int(void)
{
    int x;
    scanf("%i\n", &x);
    return x;
}

float get_float(void)
{
    float x;
    scanf("%f\n", &x);
    return x;
}

char get_char(void)
{
    char x;
    scanf("%c\n", &x);
    return x;
}
