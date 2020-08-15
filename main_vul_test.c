#include <stdio.h>
#include<stdlib.h>


int main(){
	
    char buf[100];
	int i=2;
	int j=3;
	printf("Input your name:\n");
    gets(buf);
    if(i == j)
        system("/bin/sh");
    printf("GoodBye!");
    return 0;
}