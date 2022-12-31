#include<stdio.h>
#include<string.h>
int stack[50];
int top=-1;
void push(int n)
{
top++;
stack[top]=n;
}
int pop()
{
int n;
n=stack[top];
top=top-1;
return(n);
}
int main()
{
int a,b,c,i;
char prefix[50];
printf("Enter the prefix string: ");
gets(postfix);
for(i=strlen(prefix-1,i>=0,i++)
{
if(prefix[i]=='+')
{
c=pop()+pop();
push(c);
}
else if(prefix[i]=='-')
{
a=pop();
b=pop();
c=b-a;
push(c);
}
else if(prefix[i]=='*')
{
a=pop();
b=pop();
c=b*a;
push(c);
}
else if(prefix[i]=='/')
{
a=pop();
b=pop();
c=b/a;
push(c);
}
else
{
push(prefix[i]-48);
}
}
printf("\nFinal ans = %d",pop());
return 0;
}

