#include <stdio.h>
#include <stdlib.h>
  int main()
{
  int n,a,min=999999;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a);
  if(a<min)
  min=a;
  }
  printf("%d",min);
}
