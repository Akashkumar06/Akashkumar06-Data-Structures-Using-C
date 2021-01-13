#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int top=-1;
char s[MAX];

char pop()
{
    char item;
    if(top==-1)
    {
        printf("\nunderflow");
    }
    else
    {
        item=s[top];
        top--;
        return item;
    }
}
void push(char item)
{
    if(top==MAX-1)
    {
        printf("\noverflow");
    }
    else
    {
        top++;
        s[top]=item;
    }
}
int preced(char p)
{
    switch(p)
    {
        case '^':return 3;
        case '*':return 2;
        case '/':return 2;
        case '+':return 1;
        case '-':return 1;
        default: return 0;
    }
}

int main()
{
    char infix[MAX];
    char postfix[MAX]={0};
    char chscan;

    int i;  //for indexing infix
    int j=0;  //for indexing postfix

    printf("Enter an infix expression including ) at the end: ");
    scanf("%s",infix);

    printf("\n Infix Expression : %s \n",infix);

    push('(');

    //scan all the character of infix from left to right
    for(i=0;infix[i];i++)
    {
        chscan=infix[i];
        switch(chscan)
        {
            default:
                        if(isalnum(chscan))
                            postfix[j++]=chscan;
                        break;
            case '(':
                        push('(');
                        break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                        while(preced(s[top])>=preced(chscan))
                        {
                            postfix[j++]=pop();
                        }
                        push(chscan);
                        break;
            case ')':
                        while(s[top]!='(')
                        {
                            postfix[j++]=pop();
                        }
                        pop();
                        break;

        }
    }
    postfix[j]='\0';
    printf("\n Postfix (Reverse Polish) Expression : %s \n",postfix);

    return 0;
}
