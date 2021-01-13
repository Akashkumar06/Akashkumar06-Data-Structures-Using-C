#include<stdio.h>
#include<ctype.h>

# define MAXSTACK 10
# define POSTFIXSIZE 10

int stack[MAXSTACK];
int top= -1;

/* define push operation */
void push(int item)
{
    if(top >= MAXSTACK -1)
    {
        printf("stack over flow");
        return;
    }
    else
    {
        top = top + 1 ;
        stack[top]=item;
    }
}
/* define pop operation */
int pop()
{
    int item;
    if(top <0)
    {
        printf("stack under flow");
    }
    else
    {
        item = stack[top];
        top=top-1;
        return item;
    }
}

void EvalPostfix(char postfix[])
{
    int i;
    char ch;
    int val;
    int A,B;

 /* evaluate postfix expression */
 for(i=0;postfix[i] !=')'; i++)
 {

     ch=postfix[i];
     if(isdigit(ch))
     {
         /* we saw an operand, push the digit onto stack
         ch - '0' is used for getting digit rather than ASCII code of digit */
         push(ch - 'o');
     }
     else if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
     {
         A = pop();
         B = pop();
         switch (ch)
         {
         case '*':
         val = B * A;
         break;

         case '/':
         val = B / A;
         break;

         case '+':
         val = B + A;
         break;

         case '-':
         val = B - A;
         break;
         }

         push(val);
     }
 }
 printf(" \n Result of expression evaluation : %d \n", pop());
}
int main()
{
    int i;

    char postfix[POSTFIXSIZE];
    printf("ASSUMPTION: There are only four operators(*,/,+,-) in an expression and operand is single digit");
    printf(" \n Enter postfix expression, \npress right parenthesis ')' for end expression : ");

    for( i=0; i<= POSTFIXSIZE -1 ;i++)
    {
         scanf("%c", &postfix[i]);

         if (postfix[i]== ')' )
         {break; }
    }
    EvalPostfix(postfix);

    return 0 ;
}
