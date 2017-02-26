#include <stdio.h>

int factorial ( int num )
{
    int ans=num;
	while(num>1)
	{
		num=num-1;
		ans=ans*num;
	}
	return ans;
}

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf( "%d", &no );
    ans = factorial( no );
    printf("The factorial is %d ", ans );
    return 0;
}
