#include<stdio.h>

int main() {

	int i,j;
	
	for(i=2; i<=100;i++)
	{
		for(j=2;j<=100;j++)
		{
			if((i%j)==0)
			{
				if(i==j)
				{
					printf("Número %d é primo \n",i);
				}
				break;
			}
		}
	}		
}