#include<stdio.h>
#include<stdlib.h>

int *h,n,m,c;

int main(){
int i,k,x;
printf("\nEnter the number of employee  records (N): ");
scanf("%d",&n);
printf("\nEnter the two digit memory locations (m) for hash table: ");
scanf("%d",&m);

h=malloc(m*sizeof(int));
for(i=0;i<m;i++)h[i]=-1;

printf("\nEnter the four digit key values (K) for N Employee Records:\n ");
for(i=0;i<n;i++){
scanf("%d",&k);
if(c==m){
printf("\n-----Hash table is full. Cannot insert the record %d key-----",i+1);
break;
}
x=k%m;
while(h[x]!=-1)x=(x+1)%m;
h[x]=k;c++;
}

if(!c){printf("\nHash Table is empty");return 0;}

printf("\nHash Table contents are:\n ");
for(i=0;i<m;i++)
printf("\n T[%d] --> %d ",i,h[i]);
}
