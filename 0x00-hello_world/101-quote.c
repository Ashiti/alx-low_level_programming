#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
write(2, "the alx course is very important for new programmers\" - Ashagrie Mirie, 2022-07-04\n", 
sizeof("the alx course is very important for new programmers\" - Ashagrie Mirie, 2022-07-04\n")); 
return(0);
}

