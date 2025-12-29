#include <stdio.h>

int main(void)
{
	/*
	if (조건식) {
		조건을 만족한다면 실행할 코드 작성;
		}else{
			조건식의 결과가 false라면 실행할 코드
		}
		
		if(조건식)
			조건을 만족할경우 실행
			
	실행할 코드가 한줄이면 중괄호를 생략해도 됨*/

	int num1 = 5, num2 = 10;
	if (num1 >= num2) {
		printf("조건을 만족했습니다.");
	}

	//사용자가 당신은 하루 몇 보 걷나요? 물어본후
	//10000보이상이면 
	//하루에 *****보 걷다니 대단해요! 좋은 습관입니다. 출력

	int walkCount;
	printf("당신은 하루에 몇 보 걷나요?");
	scanf_s("%d", &walkCount);
	if (walkCount >= 10000) {
		printf("하루에 %d보 걷다니 대단해요! 좋은 습관입니다.", walkCount);
	}

	//나이가 15~18세 사이에 있다면 신분증 없어도 통과
	//나이 상관 없이 신분증이 있다면 통과 (신분증이 있으면 1, 없으면 0)
	//조건을 만족한다면 조건만족 이라고 출력

	int age, hasID;
	//나이
	printf("나이를 입력하세요 :");
	scanf_s("%d", &hasID);

	if (age >= 15 && age <= 18 || hasID) {
		printf("조건을 만족합니다. 통과~");
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.");
	}
	else {
		printf("alpha는 B와 다릅니다.");
	}


	//좋아하는 숫자를 입력받아 10이상인지 이하인지 확인하기

	int likeNum;
	printf("좋아하는 숫자를 입력하세요");
	scanf_s("%d", &likeNum);

	if (likeNum >= 10) {
		printf("10보다 큰수를 좋아하네");
	}
	else {
		printf("10보다 작은수를 좋아하네");
	}
	return 0;
}