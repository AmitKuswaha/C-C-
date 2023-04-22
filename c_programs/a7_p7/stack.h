/*
CH-230-A
a7_p7.c
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

struct stack {
    unsigned int count;
    int array[12]; // Container
};

void push (int x, struct stack *s);
void pop (struct stack *s);
void empty (struct stack *s);
int isempty(struct stack *s);
