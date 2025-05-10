#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,m,n,c;
	int array1[10],array2[10],array3[20];
	printf("Enter number of element of the first sorted array:");
	scanf("%d",&p);
	printf("Enter element of the 1st array:");
	for(m=0;m<=p-1;m++)
	 {
	 	scanf("%d",&array1[m]);
	 }
	printf("Enter the number of element of the second sorted array:");
	scanf("%d",&q);
	printf("Enter element of the 2nd array:");
	for(n=0;n<=q-1;n++)
	 {
	 	scanf("%d",&array2[n]);
	 }
	c=0;
	m=0;
	n=0;
	while((m<p) && (n<q))
	 {
	 	if(array1[m]<=array2[n])
	 	 {
	 	 	array3[c]=array1[m++];
		 }
		else
		 {
		 	array3[c]=array2[n++];
		 }
		c++; 
	 }
	while(m<p)
	 {
	 	array3[c]=array1[m];
	 	c++;
	 	m++;
	 }
	while(n<q)
	 {
	 	array3[c]=array2[n];
	 	c++;
	 	n++;
	 }
	printf("Merged array in asending order");
	for(m=0;m<=c-1;m++)
	 {
	 	printf("%d\t",array3[m]);
	 }
}
