#include <stdio.h>
#include <locale.h>

int main(){

	printf("%s\n" , "Learning Programming Lanaguges");
	printf("%s\n" , "c-basics");


	int a = 10;
	float b = 10.0;
	char c = 'c';
	char * string = "hello world";
	int * ptr = &a;

	printf("%s a char string\n" , string);
	printf("%d an int\n" , a);
	printf("%f a float\n" , b);
	printf("%.2f a float to 2 decimal places\n" , b);
	printf("%c a char\n" , c);
	printf("%p a pointer\n" , ptr);
	printf("%d int pointer deferenced\n" , *ptr);

	setlocale(LC_ALL, "");
	struct lconv * l = localeconv();

	printf("decimal point of locale = %s\n", l->decimal_point);
	printf("thousands sep of locale = %s\n", (*l).thousands_sep);
	printf("int_curr_symbol of locale = %s\n", (*l).int_curr_symbol);
	printf("positive_sign of locale = %s\n", (*l).positive_sign);
	printf("negative_sign of locale = %s\n", (*l).negative_sign);

	return 0;
}
