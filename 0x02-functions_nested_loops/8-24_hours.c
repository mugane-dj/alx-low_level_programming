#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Desc: prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int minutes = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
