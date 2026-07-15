task = sum and difference between two int and float numbers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	  int m,n;
    float l,k;
    scanf("%d%d",&m,&n);
    int sum=m+n;
    int diff=m-n;
    printf("%d %d",sum,diff);
    printf("\n");
    scanf("%f%f",&l,&k);
     float sum2=l+k;
    float diff2=l-k;
    printf("%.1f %.1f",sum2,diff2);
     return 0;
}
