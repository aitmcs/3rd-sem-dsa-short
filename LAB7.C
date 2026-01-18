#include<stdio.h>
#include<stdlib.h>

typedef struct n{
char s[25],n[25],d[25],g[25];
int a;long p;
struct n*l,*r;
}*N;

N f=NULL;int c=0;

N crt(){
N t=malloc(sizeof(*t));
if(!t){printf("\n Running out of memory ");exit(0);}
printf("\n Enter the ssn,Name,Department,Designation,Salary,PhoneNo of the employee: \n");
scanf("%s %s %s %s %d %ld",t->s,t->n,t->d,t->g,&t->a,&t->p);
t->l=t->r=NULL;c++;return t;
}

N ifr(){
N t=crt();
if(!f)return t;
t->r=f;f->l=t;return t;
}

N ien(){
N q=f,t=crt();
if(!q)return t;
while(q->r)q=q->r;
q->r=t;t->l=q;return f;
}

N dfr(){
N t=f;
if(!f){printf("\nDoubly Linked List is empty ");return NULL;}
if(!f->r){
printf("\nThe employee node with the ssn:%s is deleted ",f->s);
free(f);c--;return NULL;}
f=f->r;f->l=NULL;
printf("\nThe employee node with the ssn:%s is deleted ",t->s);
free(t);c--;return f;
}

N den(){
N q=f,p=NULL;
if(!f){printf("\nDoubly Linked List is empty ");return NULL;}
if(!f->r){
printf("\nThe employee node with the ssn:%s is deleted ",f->s);
free(f);c--;return NULL;}
while(q->r){p=q;q=q->r;}
printf("\nThe employee node with the ssn:%s is deleted ",q->s);
free(q);p->r=NULL;c--;return f;
}

void disp(){
N q=f;int i=1;
if(!q){printf("\nNo Contents to display in DLL ");return;}
while(q){
printf("\nENode:%d|SSN:%s| |Name:%s| |Department:%s| |Designation:%s| |Salary:%d| |Phone no:%ld|",
i++,q->s,q->n,q->d,q->g,q->a,q->p);
q=q->r;}
printf("\nNo of employee nodes is %d",c);
}

void deq(){
int ch;
while(1){
printf("\nDemo Double Ended Queue Operation ");
printf("\n1:InsertQueueFront\n 2: DeleteQueueFront\n 3:InsertQueueRear\n 4:DeleteQueueRear\n 5:DisplayStatus\n 6: Exit \n");
scanf("%d",&ch);
if(ch==1)f=ifr();
else if(ch==2)f=dfr();
else if(ch==3)f=ien();
else if(ch==4)f=den();
else if(ch==5)disp();
else return;
}}

int main(){
int ch,i,n;
while(1){
printf("\n\n--------Menu--------");
printf("\n1:Create DLL of Employee Nodes ");
printf("\n2:DisplayStatus");
printf("\n3:InsertAtEnd");
printf("\n4:DeleteAtEnd");
printf("\n5:InsertAtFront");
printf("\n6:DeleteAtFront");
printf("\n7:Double Ended Queue Demo using DLL ");
printf("\n8:Exit \n");
printf("\nPlease enter your choice: ");
scanf("%d",&ch);

if(ch==1){
printf("\nEnter the no of Employees: ");
scanf("%d",&n);
for(i=0;i<n;i++)f=ien();
}
else if(ch==2)disp();
else if(ch==3)f=ien();
else if(ch==4)f=den();
else if(ch==5)f=ifr();
else if(ch==6)f=dfr();
else if(ch==7)deq();
else if(ch==8)exit(0);
else printf("\nPlease Enter the valid choice ");
}}
