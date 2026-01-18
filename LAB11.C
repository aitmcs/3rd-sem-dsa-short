#include<stdio.h>
#include<stdlib.h>

int a[50][50],v[50],n,q[20],f=-1,r=-1;

void bfs(int s){
int i,c;
v[s]=1;q[++r]=s;
while(f!=r){
c=q[++f];
for(i=1;i<=n;i++)
if(a[c][i]&& !v[i]){
q[++r]=i;v[i]=1;
printf("%d ",i);
}}
}

void dfs(int s){
int i;
v[s]=1;
for(i=1;i<=n;i++)
if(a[s][i]&&!v[i]){
printf("%d ",i);
dfs(i);
}
}

int main(){
int ch,s,i,j;
printf("\nEnter the number of vertices in graph:");
scanf("%d",&n);
printf("\nEnter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)scanf("%d",&a[i][j]);

for(i=1;i<=n;i++)v[i]=0;
printf("\nEnter the starting vertex: ");
scanf("%d",&s);

printf("\n==>1. BFS: Print all nodes reachable from a given starting node");
printf("\n==>2. DFS: Print all nodes reachable from a given starting node");
printf("\n==>3:Exit");
printf("\nEnter your choice: ");
scanf("%d",&ch);

if(ch==1){
printf("\nNodes reachable from starting vertex %d are: ",s);
bfs(s);
for(i=1;i<=n;i++)
if(!v[i])printf("\nThe vertex that is not reachable is %d",i);
}
else if(ch==2){
printf("\nNodes reachable from starting vertex %d are:\n",s);
dfs(s);
}
else if(ch==3)exit(0);
else printf("\nPlease enter valid choice:");
}
