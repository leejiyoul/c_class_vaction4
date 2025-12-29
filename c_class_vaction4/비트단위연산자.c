#include<stdio.h>
int main(void)
{
	//& (and) : 대응하는 각 비트의 값이 모두 1이면 1을 반환 아니면 0
	//| (or) : 대응하는 비트의 값 중에 1이 하나라도 있으면 1을 반환
	//^ (xor) : 대응하는 비트의 값이 다르면 1을 반환
	//~ (not) : 비트의 값이 1이면 0으로, 0이라면 1로 결과를 반전시켜 나타냄

	int bitFive = 5;
	int bitThree = 3;
	//5를 2진수로 바꾸기 : 0101
	//3을 2진수로 바꾸기 : 0011
	//0101
	//0011
	//0001 -> 1

	//0111
	//0101
	//0101 -> 5

	prinf("5 & 7 = %d \n", bitFive & bitThree);
	prinf("5 | 7 = %d \n", bitFive | bitThree);
	prinf("5 ^ 7 = %d \n", bitFive ^ bitThree);

	prinf("~%d = %d \n", bitFive & ~bitFive);


	return 0;
}