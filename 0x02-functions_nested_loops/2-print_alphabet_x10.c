#include "main.h"
/**
* main - print_alphabet_x10 - prints alphabet letters
* ten times
* Description: : The function uses loop to operate
*Return: 0
*/

void print_alphabet_x10(void)
{
  int count, a;
    for (count = 1; count <= 10; count++)
    {
       for (a = 'a'; a <= 'z'; a++)
          _putchar("%c", a);
        _putchar("\n");
    }
}
