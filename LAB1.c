#include<stdio.h>
#include<stdlib.h>

struct D{char*n,*a;int d;};

int main(){
int i,n;printf("Enter the number of days in the week: ");scanf("%d",&n);
struct D*c=malloc(n*sizeof*c);
for(i=0;i<n;i++){
c[i].n=malloc(20);c[i].a=malloc(100);
printf("\nEnter details for Day %d:\n",i+1);
printf("Enter the day name: ");scanf("%s",c[i].n);
printf("Enter the date: ");scanf("%d",&c[i].d);
printf("Enter the activity for the day: ");scanf(" %[^\n]",c[i].a);
}
printf("\nWeek's Activity Details:\n");
for(i=0;i<n;i++){
printf("Day %d:\nDay Name: %s\nDate: %d\nActivity: %s\n\n",
i+1,c[i].n,c[i].d,c[i].a);
free(c[i].n);free(c[i].a);}
free(c);
}
