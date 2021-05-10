#include<stdio.h>
#include<stdlib.h>

int count = 0;
int stack[10001]; 

//int stack[10001]; can be change,
//struct Stack{
//int value[100];
//}s1; (structure) => In Boj, it said it is wrong. But the function of the stack is the same.



int Push(num);
int Pop();
void Size();
int Empty();
int Top();

int main(void) {
	int order = 0;
	char ordered[30] = { 0 };
	int num;


	scanf("%d", &order);

	for (int i = 0; i < order; i++) {
		scanf("%s", &ordered);

		if (strcmp(ordered, "push") == 0) {
			scanf("%d", &num);
			Push(num);
		}

		if (strcmp(ordered, "pop") == 0) {
			Pop();
		}

		if (strcmp(ordered, "size") == 0) {
			Size();
		}

		if (strcmp(ordered, "empty") == 0) {
			Empty();
		}

		if (strcmp(ordered, "top") == 0) {
			Top();
		}
	}


}

int Push(num) {
	stack[count] = num;
	count++;
}

int Pop() {
	if (count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", stack[--count]);
	}
}

void Size() {
	printf("%d\n", count);
}

int Empty() {
	if (count == 0) {
		printf("1\n");
	}
	else
		printf("0\n");
}

int Top() {
	if (count == 0) {
		printf("-1\n");
	}
	else
		printf("%d\n", stack[count - 1]);
}
