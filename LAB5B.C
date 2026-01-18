#include<stdio.h>
#define M 5

char q[M];int f=-1,r=-1;

int main(){
int c,i;char e;
do{
printf("\n\n---- Circular Queue Menu ----\n");
printf("1. Insert an Element\n");
printf("2. Delete an Element\n");
printf("3. Display Circular Queue\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&c);

if(c==1){
printf("Enter element to be inserted: ");
scanf(" %c",&e);
if((r+1)%M==f)printf("Circular Queue Overflow\n");
else{
if(f==-1)f=r=0;
else r=(r+1)%M;
q[r]=e;
}}
else if(c==2){
if(f==-1)printf("Circular Queue Underflow\n");
else if(f==r)f=r=-1;
else f=(f+1)%M;
}
else if(c==3){
if(f==-1)printf("Circular Queue is empty\n");
else{
printf("Circular Queue elements: ");
i=f;
do{
printf("%c ",q[i]);
i=(i+1)%M;
}while(i!=(r+1)%M);
printf("\n");
}}
else if(c==4)printf("Exiting...\n");
else printf("Invalid choice! Please enter a valid option.\n");

}while(c!=4);
}
