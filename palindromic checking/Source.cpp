#include<stdio.h>
int main() {
	int num, temp, val, check = 0, i;
	printf("Enter number: ");
	scanf_s("%d", &num);
	temp = num;
	for (i = 1;num > 0;i++) {
		val = num % 10;
		check = (check * 10) + val;
		num /= 10;
	}
	if (check == temp) printf("The number %d is palindrome.", temp);
	else printf("The number %d is not palindrome.", temp);
	return 0;
}