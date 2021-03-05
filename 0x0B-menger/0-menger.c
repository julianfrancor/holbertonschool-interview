#include "menger.h"

/**
 * menger - draws a 2D Menger Sponge
 * @level: the level of the Menger Sponge to draw
 */
void menger(int level)
{
	int lvl_i, x, y, i, j, length;
	char **a = NULL;

	length = (int)pow(3, level);

	a = malloc(sizeof(char *) * length);
	if (a == NULL)
		return;

	for (i = 0; i < length; i++)
	{
		a[i] = malloc(sizeof(char) * length);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
		}
	}

	for (y = 0; y < length; y++)
		for (x = 0; x < length; x++)
			a[x][y] = '#';

	for (lvl_i = 1; lvl_i <= level; lvl_i++)
		holes_array(a, lvl_i, length);

	for (y = 0; y < length; y++)
	{
		for (x = 0; x < length; x++)
			printf("%c", a[x][y]);
		printf("\n");
	}

	for (i = 0; i < length; i++)
		free(a[i]);
	free(a);
}

/**
 * holes_array - puts holes in the array
 * @a: array with the drawing
 * @lvl: the level of the holes to put
 * @length: length of the entire array
 */
void holes_array(char **a, int lvl, int length)
{
	int x, y, xx, yy, l_hole, l_prev_lvl, l_curr_lvl;

	l_prev_lvl = (int)pow(3, lvl - 1);
	l_curr_lvl = (int)pow(3, lvl);
	l_hole = l_prev_lvl;

	for (y = l_prev_lvl; y < length; y += l_curr_lvl)
	{
		for (x = l_prev_lvl; x < length; x += l_curr_lvl)
		{
			for (yy = 0; yy < l_hole; yy++)
			{
				for (xx = 0; xx < l_hole; xx++)
				{
					a[x + xx][y + yy] = ' ';
				}
			}
		}
	}
}
