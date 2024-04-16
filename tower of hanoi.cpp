#include <stdio.h>
void towerOfHanoi(int n, char src, char help, char dest)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from src %c to dest %c", src, dest);
		return;
	}
	towerOfHanoi(n-1, src, dest, help);
	printf("\n Move disk %d from src %c to dest %c", src,dest);
	towerOfHanoi(n-1, help, src, dest);
}

int main()
{
	int n = 2; 
	towerOfHanoi(n, 's', 'h', 'd'); 
	return 0;
}

