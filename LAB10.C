#include<stdio.h>
#include<stdlib.h>

typedef struct b{
int d;struct b*l,*r;
}*N;

N crt(){
N t=malloc(sizeof(*t));
printf("\nEnter The value: ");
scanf("%d",&t->d);
t->l=t->r=NULL;return t;
}

void ins(N r,N n){
if(n->d<r->d){
if(!r->l)r->l=n;else ins(r->l,n);}
if(n->d>r->d){
if(!r->r)r->r=n;else ins(r->r,n);}
}

void pre(N r){if(r){printf("%d ",r->d);pre(r->l);pre(r->r);}}
void in(N r){if(r){in(r->l);printf("%d ",r->d);in(r->r);}}
void post(N r){if(r){post(r->l);post(r->r);printf("%d ",r->d);}}

void sr(N r){
int k;N c=r;
if(!r){printf("\nBST is empty.");return;}
printf("\nEnter Element to be searched: ");
scanf("%d",&k);
while(c){
if(c->d==k){printf("\nKey element is present in BST ");return;}
c=k<c->d?c->l:c->r;
}
printf("\nKey element is not found in the BST ");
}

int main(){
int ch,i,n;N r=NULL,t;
while(1){
printf("\n-------BST MENU-------");
printf("\n1.Create a BST ");
printf("\n2.Search ");
printf("\n3.BST Traversals: ");
printf("\n4.Exit");
printf("\nEnter your choice: ");
scanf("%d",&ch);

if(ch==1){
printf("\nEnter the number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
t=crt();
if(!r)r=t;else ins(r,t);
}}
else if(ch==2){
if(!r)printf("\nTree Is Not Created ");
else{
printf("\nThe Preorder display: ");
pre(r);
printf("\nThe Inorder display: ");
in(r);
printf("\nThe Postorder display: ");
post(r);
}}
else if(ch==3)sr(r);
else if(ch==4)exit(0);
}}
