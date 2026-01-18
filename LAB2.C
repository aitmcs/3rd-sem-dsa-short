#include<stdio.h>
#include<string.h>

char s[50],p[20],r[20],o[50];
int c,m,i,j,k,f;

int main(){
printf("Enter the main string:");
fgets(s,50,stdin);s[strcspn(s,"\n")]=0;

printf("\nEnter the pat string:");
fgets(p,20,stdin);p[strcspn(p,"\n")]=0;

printf("\nEnter the replace string:");
fgets(r,20,stdin);r[strcspn(r,"\n")]=0;

printf("\nThe string before pattern match is:\n %s",s);

for(;s[c];){
if(s[m]==p[i]){
if(p[++i]==0){
f=1;
for(k=0;r[k];)o[j++]=r[k++];
i=0;c=m;
}else m++;
}
else o[j++]=s[c++],m=c,i=0;
}
o[j]=0;

if(f)printf("\nThe string after pattern match and replace is: \n %s ",o);
else printf("\nPattern string is not found");
}
