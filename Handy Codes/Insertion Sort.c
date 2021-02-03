#include<stdio.h>
int main()
{
int num ;
scanf(" %d",&num) ;
int p[num] ;
for(int i=1 ;i<= num ; i++)
{
    scanf(" %d",&p[i]) ;
}
 
 sort(p,num) ;
int q ,key ;
scanf(" %d",&q) ;
for (int i=1 ;i<= q ;i++)
{   int index = 0;
    scanf(" %d",&key) ;
   index= binarysearch(1,num,key ,p);
   printf("%d\n",index) ;
}
 
}
 
void sort(int p[] , int n )
{
for(int j=1 ; j<= n ;j++)
{   
    int t = j ;
  int temp = p[t] ;
  
    while(t>1 && p[t-1] > temp )
    {
    p[t] = p[t-1] ;
    t--;
    }
  p[t]= temp ;
 
}
 
}

int binarysearch(int low , int high , int key , int arr[] )
{
  while(low<=high)
  {
   int mid = (low+high)/2 ;
   if (key < arr[mid] )
   high = mid - 1 ;
   else if ( key > arr[mid])
   low = mid + 1 ;
   else 
   return mid ;
  }
  return -1 ;
}
