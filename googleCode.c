#include<stdio.h>

void main()
{
 int m,n;
 scanf("%d%d",&m,&n);
 int arr[n][2];
 int i,j,num=0,x,y,brr[n];
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i][0]);
  arr[i][1] = i;
 } 
 
 //sort it : prefereably merge sort
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(arr[j][0] < arr[j+1][0])
   {
    x = arr[j+1][0];
    y = arr[j+1][1];
    arr[j+1][0] = arr[j][0];
    arr[j+1][1] = arr[j][1];
    arr[j][0] = x;
    arr[j][1] = y;
   }
  }
 }
 j=0;
 
 for(i=0;i<n;i++)
 {
  if(m>=arr[i][0])  
  {
   m = m - arr[i][0];
   num++;
   brr[j++] = arr[i][1];
  }
 }   
 
 printf("%d\n",num);
 
 for(i=0;i<num;i++)
 {
  for(j=0;j<num-1;j++)
  {
   if(brr[j] > brr[j+1])
   {
    x = brr[j+1];
    brr[j+1] = brr[j];
    brr[j] = x;
   }
  }
 } 
 
 for(i=0;i<num;i++)
 printf("%d ",brr[i]);
   
 
 }
 
 
   
