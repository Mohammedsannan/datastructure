#include<stdio.h>
void main()
{
void readarr(int[],int);
void disparr(int[],int);
void merge(int[],int[],int[],int,int);
int a[50],b[50],c[100],m,n;
printf("enter the no. of first array elements in[1-50]:");
scanf("%d",&m);
printf("enter the 1st array elements in non-decreasing order: \n");
readarr(a,m);
printf("enter the no. of second array elements[1-50]:");
scanf("%d",&n);
printf("enter the 2nd array elements in non-decreasing order: \n");
readarr(b,n);
merge(a,b,c,m,n);
printf("\n Merged array: \n");
disparr(c,m+n);
printf("\n");
}
//function to read data 
void readarr(int a[],int m)
{
int i;
for(i=0;i<m;i++)
scanf("%d",&a[i]);
return;
}

void disparr(int x[],int k)
{
int i;
for(i=0;i<k;i++)
printf("%d ",x[i]);
return;
}

//function to merge data
void merge(int a[],int b[],int c[],int m,int n)
{
int i=0,j=0,k=0;

while(i<m && j<n)
{
if(a[i]<b[j])
{
	c[k]=a[i];
        i=i+1;
	k=k+1;
}
else
{
	c[k]=b[j];
	j=j+1;
	k=k+1;
}
}
while(i<m)
c[k++]=a[i++];

while(j<n)
c[k++]=b[j++];
return;
}

