#include<stdio.h>
#define MAX 20
int top=-1;
int stack[MAX];
void push(int value){
if(top==MAX-1)
        printf("Stack is over flow");
    else
    {
        top++;
        stack[top]=value;
    }

}
int pop(){
    int no;
    if(top==-1)
        printf("Stack under flow");
    else
    {
        no=stack[top];
        top=top-1;


    }
    return (no);
}
int main()
{
    char postfix[20];
    int op1,op2,value,i;
    printf("Enter the postfix expretion:");
    scanf("%s",&postfix);
    for(i=0;postfix[i];i++)
{
    switch(postfix[i])
    {         default:
              printf("\n Enter The value for the charecter %c:",postfix[i]);
              scanf("%d",&value);
              //value=postfix[i]-'0';
              push(value);
              break;
case '+':
              op2=pop();
              op1=pop();
              value=op1+op2;
              push(value);
              break;
case '-':
              op2=pop();
              op1=pop();
              value=op1-op2;
              push(value);
              break;

case '*':
              op2=pop();
              op1=pop();
              value=op1*op2;
              push(value);
              break;
case '/':
              op2=pop();
              op1=pop();
              value=op1/op2;
              push(value);
              break;
case '^':
              op2=pop();
              op1=pop();
              value=pow(op1,op2);
              push(value);
              break;

    }
  }
  printf("The value of postfix expression is=%d",pop());
}
