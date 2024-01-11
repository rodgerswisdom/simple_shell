#include<stdio.h>
#include<unistd.h>

/**
 * MAIN: main function
 *
 * getppid: function to get parent id
 *
 * Return: always 0
 */

int main()
{
	printf("PPID IS: %d", (int)getppid());
	return (0);
}
