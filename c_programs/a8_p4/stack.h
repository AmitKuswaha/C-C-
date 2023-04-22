/*
CH-230-A
a8_p4.c
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

/* declaration of struct type*/
struct stack
{
	unsigned int count;
	int array [12];
};

/*list of functions*/
void push (int x, struct stack *s);
void pop (struct stack *s);
void empty (struct stack *s);
int isempty(struct stack *s);


