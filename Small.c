#include <stdio.h>
#include <stdlib.h>
  int main()
{
  int n,a[1001];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i]<a[j])
      {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  printf("%d",a[0]);
}
