#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int counter;

void set_counter()
{
	counter=20;
}

int main(int argc, char *argv[]) {
	
	printf("before function call i =%d\n", counter);
	set_counter(counter);
	printf("after function call i =%d\n", counter);
	
	return 0;
}


