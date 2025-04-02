#include "input.h"
#include <stdio.h>
#include <stdlib.h>

#define F fflush(stdout)

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
    atexit(free_memory);
    return text;
}

int get_int(void)
{
    int x;
    scanf("%i", &x); F;
    return x;
}

float get_float(void)
{
    float x;
    scanf("%f", &x); F;
    return x;
}

char get_char(void)
{
    char x;
    scanf("%c", &x); F;
    return x;
}
