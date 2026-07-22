#include <stdio.h>

#define PI 3.14159265f

int main(void)
{
	float radius = 10.0f;
	float radius_cubed = radius * radius * radius;
	float volume = (4.0f / 3.0f) * (PI * radius_cubed);
	
	printf("Volume: %f meters\n", volume);

	return 0;
}
