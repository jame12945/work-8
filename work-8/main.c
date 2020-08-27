#include<stdio.h>
int multiple();
int solution(int x);
int x, i,j;
int sum1;
int solution(int x) {
	printf("Input your last number: ");
	scanf_s("%d", &x);

	for (int i = 3; i < x; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d", i);
			sum1 += i;
		}
		printf("\n");


	}
	return sum1;
}

int multiple() {
	int sum = 0;
	printf("Plese input your last number again: ");
	scanf_s("%d", &x);
	for (i = 3; i < x; i++) {


		if (i % 3 == 0 || i % 5 == 0) {

			sum += i;

		}
		else {
		}

	}
	printf("your combination of all value is %d", sum);
	return sum;
}
int main() {
	
	solution(x);

	multiple();

}