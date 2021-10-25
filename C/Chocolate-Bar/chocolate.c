#include <stdio.h>

/* Pre-declared functions */
int break_chocolate(unsigned int length, unsigned int width);

int main(void)
{
	unsigned int length, width;
	int times_broken;

	/* Instructions */
	printf("Chocolate bar breaker! Enter length and width of chocolate bar!\n");

	/* Getting length of bar */
	printf("Length: ");
	scanf("%u", &length);
	
	/* Getting width of bar */
	printf("Width: ");
	scanf("%u", &width);

	/* Sending values to breaking function */
	times_broken = break_chocolate(length, width);
	printf("Times broken: %d", times_broken);
}

int break_chocolate(unsigned int length, unsigned int width)
{
	int times_broken, size_of_bar;
	/* Getting the amount of squares in the bar */
	size_of_bar = length * width;

	/* Subtracting 1 from the total amount of pieces which equals to
	 * the amount of breaking points in the bar (times broken)*/
	return times_broken = size_of_bar - 1;
}
