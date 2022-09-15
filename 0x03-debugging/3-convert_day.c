#include "main.h"

/**
 * convert_day - converts day of month to day of year
 * , tkaing leap years into account
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day)
{
	switch (month)
	{
		case 2:
			day = 31 + day;
			break;
	}
}
