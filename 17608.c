#include <stdio.h>

int main()
{
  int n, h, a, b, t, i;
  int array[100000];

  b = 1;

  scanf("%d", &n);

  for (i=1; i<=n; i++)
  {
    scanf("%d", &array[i]);
  }

  a = array[n];

  for (t=n-1; t>=1; t--)
  {
    if (array[t]>a)
    {
      b++;
      a = array[t];
    }
  }
  
  printf("%d", b);
  return 0;
}
