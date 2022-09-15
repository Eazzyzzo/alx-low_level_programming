
re f ... loops
Files
TextThumbnail preview of a Drive item

main.h.txt
TextThumbnail preview of a Drive item

Task 0.txt
TextThumbnail preview of a Drive item

Task 1.txt
TextThumbnail preview of a Drive item

Task 2.txt
TextThumbnail preview of a Drive item

Task 3.txt
TextThumbnail preview of a Drive item

Task 4.txt
TextThumbnail preview of a Drive item

Task 5.txt
TextThumbnail preview of a Drive item

Task 6.txt
TextThumbnail preview of a Drive item

Task 7.txt
TextThumbnail preview of a Drive item

Task 8.txt
TextThumbnail preview of a Drive item

Task 9.txt
TextThumbnail preview of a Drive item

Task 10.txt
TextThumbnail preview of a Drive item

Task 11.txt
TextThumbnail preview of a Drive item

Task 12.txt

#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
		int inc1, inc2;

			if (size > 0)
					{
								for (inc1 = 0; inc1 < size; inc1++)
											{
															for (inc2 = 0; inc2 < (size - 1); inc2++)
																			{
																								putchar('#');
																											}

																		putchar('#');
																					putchar('\n');
																							}
									}
				else
						{
									putchar('\n');
										}
}
