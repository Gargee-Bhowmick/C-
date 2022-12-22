#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t;
	int i,j,n;
	int d=-1;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    d=-1;
	    for(i=0;i<=(int)sqrt(n);i++)
	    {
	        for(j=0;j<(int)sqrt(n);j++)
	        {
	            if((i*i)+(j*j)==n)
	            {
	                d=0;
	                printf("%d %d",j,i);
	                break;
	            }

	        }
	        	if(d==0)
	            break;
	    }
	    if(d==-1)
	    {
	        printf("%d",d);
	    }
	    t--;
	}
	return 0;
}


