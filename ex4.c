#include <stdio.h>

/* prints the program option menu */
void menu()
{
	puts("a - reads 10 integers and outputs the mean value of those numbers.");
	puts("b - reads 10 integers and then outputs the even numbers in reverse order");
	puts("c - reads a string and converts all characters to uppercase");
	puts("d - reads a string and two characters (c1 and c2), and replaces all occurences of c1 by c2");
	puts("e - reads a string and a character and deletes all occurences of that character in the string");
	puts("s - print this menu");
	puts("q - end program");
}

int main()
{
	char option;
	menu();



	return 0;
}
