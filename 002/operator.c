#include <stdio.h>

int main() {
  int num1, num2, result;
  char operation;

  // 사용자로부터 두 숫자 입력
  printf("첫 번째 숫자를 입력하세요: ");
  scanf("%d", &num1);
  printf("두 번째 숫자를 입력하세요: ");
  scanf("%d", &num2);

  // 사용자로부터 연산자 입력
  printf("사칙연산(+, -, *, /) 중 원하는 연산을 선택하세요: ");
  scanf(" %c", &operation);

  // 연산자에 따른 사칙연산 수행
  switch (operation) {
    case '+':
      result = num1 + num2;
      printf("%d + %d = %d\n", num1, num2, result);
      break;
    case '-':
      result = num1 - num2;
      printf("%d - %d = %d\n", num1, num2, result);
      break;
    case '*':
      result = num1 * num2;
      printf("%d * %d = %d\n", num1, num2, result);
      break;
    case '/':
      // 나눗셈은 0으로 나눌 수 없으므로 예외 처리
      if (num2 == 0) {
        printf("0으로 나눌 수 없습니다.\n");
      } else {
        result = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, result);
      }
      break;
    default:
      printf("잘못된 연산자를 입력했습니다.\n");
  }

  return 0;
}
