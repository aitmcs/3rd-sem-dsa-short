#include<stdio.h>
#include<math.h>

void h(int n,char a,char b,char c){
if(!n)return;
h(n-1,a,c,b);
printf("\nMove disc %d from %c to %c",n,a,c);
h(n-1,b,a,c);
}

int main(){
int n;
printf("\nEnter the number of discs: \n");
scanf("%d",&n);
h(n,'A','B','C');
printf("\n\nTotal Number of moves are: %d",(int)pow(2,n)-1);
}
