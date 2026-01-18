#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define C(x,y)((x==y)?0:(x>y)?1:-1)

typedef struct n{
int c,x,y,z;
struct n*l;
}*N;

N g(){
N t=malloc(sizeof(*t));
if(!t){printf("Running out of memory \n");return NULL;}
return t;
}

N at(int c,int x,int y,int z,N h){
N t=g(),q=h->l;
t->c=c;t->x=x;t->y=y;t->z=z;
while(q->l!=h)q=q->l;
q->l=t;t->l=h;return h;
}

N rd(N h){
int i,n,c,x,y,z;
printf("\nEnter the no of terms in the polynomial: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("\n\tEnter the %d term: ",i);
printf("\n\t\tCoef =  ");scanf("%d",&c);
printf("\n\t\tEnter Pow(x) Pow(y) and Pow(z): ");
scanf("%d%d%d",&x,&y,&z);
h=at(c,x,y,z,h);
}
return h;
}

void dsp(N h){
N q=h->l;
if(q==h){printf("\nPolynomial does not exist.");return;}
while(q!=h){
printf("%dx^%dy^%dz^%d",q->c,q->x,q->y,q->z);
q=q->l;if(q!=h)printf(" + ");
}}

int eval(N h){
int x,y,z,s=0;N q=h->l;
printf("\nEnter the value of x,y and z: ");
scanf("%d%d%d",&x,&y,&z);
while(q!=h){
s+=q->c*pow(x,q->x)*pow(y,q->y)*pow(z,q->z);
q=q->l;
}
return s;
}

N sum(N a,N b,N c){
N x=a->l,y=b->l;int k;
while(x!=a&&y!=b){
if(x->x==y->x&&x->y==y->y&&x->z==y->z){
c=at(x->c+y->c,x->x,x->y,x->z,c);
x=x->l;y=y->l;continue;}
if(C(x->x,y->x)<0){c=at(y->c,y->x,y->y,y->z,c);y=y->l;}
else if(C(x->x,y->x)>0){c=at(x->c,x->x,x->y,x->z,c);x=x->l;}
else if(C(x->y,y->y)<0){c=at(y->c,y->x,y->y,y->z,c);y=y->l;}
else if(C(x->y,y->y)>0){c=at(x->c,x->x,x->y,x->z,c);x=x->l;}
else if(C(x->z,y->z)<0){c=at(y->c,y->x,y->y,y->z,c);y=y->l;}
else{c=at(x->c,x->x,x->y,x->z,c);x=x->l;}
}
while(x!=a){c=at(x->c,x->x,x->y,x->z,c);x=x->l;}
while(y!=b){c=at(y->c,y->x,y->y,y->z,c);y=y->l;}
return c;
}

int main(){
N h=g(),h1=g(),h2=g(),h3=g();int r,ch;
h->l=h;h1->l=h1;h2->l=h2;h3->l=h3;
while(1){
printf("\n--------Menu--------");
printf("\n1.Represent and Evaluate a Polynomial P(x,y,z)");
printf("\n2.Find the sum of two polynomials POLY1(x,y,z)");
printf("\nEnter your choice:");
scanf("%d",&ch);
if(ch==1){
printf("\n----Polynomial evaluation P(x,y,z)----\n");
h=rd(h);
printf("\nRepresentation of Polynomial for evaluation: \n");
dsp(h);
r=eval(h);
printf("\nResult of polynomial evaluation is : %d \n",r);
}
else if(ch==2){
printf("\nEnter the POLY1(x,y,z):  \n");
h1=rd(h1);printf("\nPolynomial 1 is:  \n");dsp(h1);
printf("\nEnter the POLY2(x,y,z):  \n");
h2=rd(h2);printf("\nPolynomial 2 is: \n");dsp(h2);
printf("\nPolynomial addition result: \n");
h3=sum(h1,h2,h3);dsp(h3);
}
else exit(0);
}}
