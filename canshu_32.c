#include <stdio.h>
#include<stdlib.h>
void vul(int i,int j,int k)
{
    int x=4;
	int y=5;
	int z=6;
	z=i+j+k;
	printf("%d",z);
	
}

int main(){
	
    int a=1;
	int b=2;
	int c=3;
	vul(a,b,c);
	printf("Goog Bye!");
    return 0;
}