//&&(and) :~그리고  : 피연산자 중 하나만 ture라면 false를 반환
//|| (or) :  ~또는 : 피연산자중 하나만 ture이면 ture를 반환
//!(not) : 부정 : 피연산자의 값이 ture라면 false로 뒤집는다
//
//10 >= 5&&20 <= 30 / ture
//10 >= 30 || 20 <= 30 / ture
//!(10>=30) / ture

#include <stdio.h>
int main(void)
{

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	print("결과 : %d\n", result);

	result = !(one > two);
	print("결과 : %d\n", result);



	return 0;
}
