#include<stdio.h>
#include<stdlib.h>
#define M 3

int s[M],t=-1;

void push(int x){
if(t==M-1){printf("\n-----------Stack overflow-----------");return;}
s[++t]=x;
}

int pop(){
if(t==-1){printf("\n-----------Stack underflow-----------");return -1;}
return s[t--];
}

void disp(){
int i;
if(t==-1){printf("\n-----------Stack is empty-----------");return;}
printf("\nStack elements are:\n ");
for(i=t;i>=0;i--)printf("| %d |\n",s[i]);
}

void pal(){
int i,f=1;
printf("\nStack content are:\n");
for(i=t;i>=0;i--)printf("| %d |\n",s[i]);
printf("\nReverse of stack content are:\n");
for(i=0;i<=t;i++)printf("| %d |\n",s[i]);
for(i=0;i<=t/2;i++)if(s[i]!=s[t-i]){f=0;break;}
if(f)printf("\nIt is palindrome number");
else printf("\nIt is not a palindrome number");
}

int main(){
int c,x;
while(1){
printf("\n\n\n\n-----------Menu----------- : ");
printf("\n=>1.Push an Element to Stack and Overflow demo ");
printf("\n=>2.Pop an Element from Stack and Underflow demo");
printf("\n=>3.Palindrome demo ");
printf("\n=>4.Display ");
printf("\n=>5.Exit");
printf("\nEnter your choice: ");
scanf("%d",&c);
switch(c){
case 1:printf("\nEnter an element to be pushed: ");scanf("%d",&x);push(x);break;
case 2:x=pop();if(x!=-1)printf("\nElement popped is: %d",x);break;
case 3:pal();break;
case 4:disp();break;
case 5:exit(1);
default:printf("\nPlease enter valid choice ");
}}}
