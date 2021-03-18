#include <stdio.h>
int main()
{
	int a;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &a);
	if (a%2 == 1)
	{
		printf("홀수입니다.");
	}
	else
	{
		printf("짝수입니다.");
	}
}