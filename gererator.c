#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// UPS: 1Z XXX XXX YY ZZZZ ZZZC

// 1Z 7F88F4 02 4
// 1Z7F88F4024xxxxxxx
// 1Z7F88F41341886xx9
// 1Z9W234A0340x11535

// https://t.17track.net/nl#nums=

/* 
california:
	1Z9W234A0340661535
	1Z9W234A0340611535

	1Z7F88F41341886329
	1Z7F88F41342098894
miami:
	1Z2RV706YW29181885
	1Z2RV706YW28555509

USPS:
	9200190249260xxxxxxxxx
	9200 1902 4926 0xxx xxxx xx
	x = 8-9
	x = 0-2
	
 */


void	print_random(char *tracking, int count)
{
	int i;
	int j;

	printf("https://t.17track.net/en#nums=");
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < strlen(tracking); j++)
		{
			if (tracking[j] != 'x')
				printf("%c", tracking[j]);
			else if (tracking[j] == 'x')
				printf("%d", rand() % 10);
		}
		if (i != count - 1)
			printf(",");
	}
	printf("\n");
}

int		main(int ac, char **av)
{
	int		count;
	char	*tracking;

	/* bach t9ra input dyal tracking ola bin ... */
	printf("dakhal tracking: ");
	scanf("%s", tracking);

	/* bach t9ra input dyal x7al bghiti t generi */
	printf("dakhal x7al bghiti t generi: ");
	scanf("%d", &count);

	print_random(tracking, count);
	return 0;
}

