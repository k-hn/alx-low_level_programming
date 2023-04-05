/**
 * _strspn - gets the number of buytes in intial
 * segment of s which consist only of bytes from accept
 *
 * @s: input string
 * @accept: input accept criteria
 *
 * Return: calculated number of bytes.
 */
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int in_count, out_count;
	unsigned int distance_travelled = 0;
	unsigned int temp_distance = 0;

	for (out_count = 0; s[out_count] != '\0'; out_count++)
	{
		/* update temp_distance */
		temp_distance = distance_travelled;

		/* loop through and compare against accept array */
		/* return distance travelled once there is a failure to match */
		for (in_count = 0; accept[in_count] != '\0'; in_count++)
		{
			if (s[out_count] == accept[in_count])
			{
				/* match!! */
				/* increment distance */
				/* and move to next character of s */
				distance_travelled += 1;
				break;
			}

		}
		/* stop if distance_travelled isn't incrmented */
		if (distance_travelled == temp_distance)
			break;
	}
	return (distance_travelled);
}
