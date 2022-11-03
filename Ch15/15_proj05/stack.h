#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

bool is_empty(void);
bool is_full(void);
int push(int i);
int pop(void);
void make_empty(void);
void stack_overflow(void);
void stack_underflow(void);

extern int contents[];
extern int top;
extern bool flag_underflow;
extern bool flag_overflow;