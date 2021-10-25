#include <stdio.h>
#include <math.h>

#define SECONDS 60
#define MINUTES 60

int main(void)
{
	const float tortoise_A_speed = 720.0f, tortoise_B_speed = 850.0f, lead = 70.0f;
	float tortoise_A_distance, tortoise_B_distance;
	float tortoise_B_feet_per_minute, time_to_catch_up, minutes, seconds, decimal_part;

	tortoise_A_distance = tortoise_A_speed + lead;
	tortoise_B_distance = tortoise_B_speed + tortoise_B_distance;
	tortoise_B_feet_per_minute = tortoise_B_speed / MINUTES;
	time_to_catch_up = tortoise_A_distance / tortoise_B_feet_per_minute;
	minutes = (int)time_to_catch_up; decimal_part = time_to_catch_up - minutes;
	seconds = 1 * decimal_part; seconds = roundf(decimal_part * SECONDS);

	printf("Tortoise A: %f\n", tortoise_A_distance);
	printf("Tortoise B: [%f, %f]\n", tortoise_B_distance, tortoise_B_feet_per_minute);
	printf("Time to catch up: [%f]\n", time_to_catch_up);
	printf("decimal_part[%f]\n", decimal_part);
	printf("minutes[%f] seconds[%f]", minutes, seconds);
}
