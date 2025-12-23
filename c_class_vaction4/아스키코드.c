#include<stdio.h>
int main(void)
{	
	char ch1 = 'A';
	printf("%c\n", ch1);

	char ch2 = 65;
	printf("숫자 : %d / 문자 : %c\n", ch1, ch2); //%c 시용하면 위에 문자 'A'가 나온다

	return 0;
}