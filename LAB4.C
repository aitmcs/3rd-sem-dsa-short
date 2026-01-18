#include<stdio.h>
#include<math.h>

int s[20],t=-1;

int main(){
char p[90],c;int i,a,b;
printf("\nEnter a valid postfix expression:\n");
scanf("%s",p);
for(i=0;p[i];i++){
c=p[i];
if(c>='0'&&c<='9')s[++t]=c-'0';
else{
b=s[t--];a=s[t--];
if(c=='+')s[++t]=a+b;
else if(c=='-')s[++t]=a-b;
else if(c=='*')s[++t]=a*b;
else if(c=='/')s[++t]=a/b;
else if(c=='%')s[++t]=a%b;
else if(c=='^'||c=='$')s[++t]=pow(a,b);
else s[++t]=0;
}}
printf("\n Result = %d",s[t]);
}
