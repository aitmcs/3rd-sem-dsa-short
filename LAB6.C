#include<stdio.h>
#include<stdlib.h>

typedef struct n{
char u[25],n[25],b[25];
int s;long p;struct n*l;
}*N;

N st=NULL;int c=0;

N crt(){
N t=malloc(sizeof(*t));
if(!t){printf("\nMemory is not available");exit(1);}
printf("\nEnter the usn,Name,Branch, sem,PhoneNo of the student:");
scanf("%s %s %s %d %ld",t->u,t->n,t->b,&t->s,&t->p);
t->l=NULL;c++;return t;
}

N ifr(){N t=crt();t->l=st;return t;}
N ien(){N t=crt(),q=st;if(!q)return t;while(q->l)q=q->l;q->l=t;return st;}

N dfr(){
N t;
if(!st){printf("\nLinked list is empty");return NULL;}
if(!st->l){printf("\nThe Student node with usn:%s is deleted ",st->u);free(st);c--;return NULL;}
t=st;st=st->l;printf("\nThe Student node with usn:%s is deleted",t->u);free(t);c--;return st;
}

N den(){
N p=NULL,q=st;
if(!st){printf("\nLinked List is empty");return NULL;}
if(!st->l){printf("\nThe student node with the usn:%s is deleted",st->u);free(st);c--;return NULL;}
while(q->l){p=q;q=q->l;}
printf("\nThe student node with the usn:%s is deleted",q->u);
free(q);p->l=NULL;c--;return st;
}

void disp(){
N q=st;int i=1;
if(!q){printf("\nNo Contents to display in SLL \n");return;}
printf("\nThe contents of SLL: \n");
while(q){
printf("\n|%d| |USN:%s| |Name:%s| |Branch:%s| |Sem:%d| |Ph:%ld|",
i++,q->u,q->n,q->b,q->s,q->p);
q=q->l;}
printf("\n No of student nodes is %d \n",c);
}

void stack(){
int ch;
while(1){
printf("\n--------Stack Demo using SLL--------\n");
printf("\n1:Push operation \n2: Pop operation \n3: Display \n4:Exit \n");
printf("\nEnter your choice for stack demo:");
scanf("%d",&ch);
if(ch==1)st=ifr();
else if(ch==2)st=dfr();
else if(ch==3)disp();
else return;
}}

int main(){
int ch,i,n;
while(1){
printf("\n--------Menu--------");
printf("\nEnter your choice for SLL operation \n");
printf("\n1:Create SLL of Student Nodes");
printf("\n2:DisplayStatus");
printf("\n3:InsertAtEnd");
printf("\n4:DeleteAtEnd");
printf("\n5:Stack Demo using SLL(Insertion and Deletion at Front)");
printf("\n6:Exit \n");
printf("\nEnter your choice:");
scanf("%d",&ch);

if(ch==1){
printf("\nEnter the no of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)st=ifr();
}
else if(ch==2)disp();
else if(ch==3)st=ien();
else if(ch==4)st=den();
else if(ch==5)stack();
else if(ch==6)exit(0);
else printf("\nPlease enter the valid choice");
}}
