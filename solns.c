/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int count)
{
  int x=0;
  for(int i=0;i<count;i++)
  {
    if(arr[i] > x)
    {
      x = arr[i];
    }
  }
  return x;
}

int min(int arr[],int count)
{
  int n=arr[0];
  for(int i=1;i<count;i++)
  {
    if(arr[i] < n)
    {
      n = arr[i];
    }
  }
  return n;
}

float average(int arr[],int count)
{
  int sum=0;
  float avg=0.0;
  for(int i=0;i<count;i++)
  {
     sum += arr[i];
  }
  avg = sum/count;
  return avg;
}

int mode(int arr[],int n)
{
  int count=0,maxCount=0,mode=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      
      if(arr[j] == arr[i])
      {
        count +=1;
      }
    }
      if(count>maxCount)
      {
      maxCount = count;
      mode= arr[i];
      }
  }
  return mode; 
}

int factors(int num,int arr[])
{
  int l=0;
  int k=0;
  for(int i=2;num>1;i++)
  {
    while(num%i==0)
    {
      l +=1;
      arr[k]=i;
      num = num/i;
      k++;
    }
  }
  return l;
}
