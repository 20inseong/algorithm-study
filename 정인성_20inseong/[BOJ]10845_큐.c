#include<stdio.h>
#include<stdlib.h>
int Queue[10000] = { NULL };
int push();
int pop();
int size();
int empty();
int front();
int back();
int b_count = 0;
int f_count = 0;
int main() {
	int ord_num = 0, num = 0;
	char order[10] = { 0 };
	scanf("%d", &ord_num);
	for (int i = 0; i < ord_num; i++) {
		scanf("%s", &order);
		if (strcmp("push", order) == 0) {
			push();
		}
		if (strcmp("pop", order) == 0) {
			pop();
		}
		if (strcmp("size", order) == 0) {
			size();
		}
		if (strcmp("empty", order) == 0) {
			empty();
		}
		if (strcmp("front", order) == 0) {
			front();
		}
		if (strcmp("back", order) == 0) {
			back();
		}
	}
}

int push() {
	int num;
	scanf("%d", &num);
	Queue[b_count] = num;
	b_count++;
}

int pop() {
	if (b_count - f_count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", Queue[f_count]);
		Queue[f_count] = NULL;
		f_count++;
	}
}

int size() {
	printf("%d\n", b_count - f_count);
}

int empty() {
	if (b_count - f_count == 0) {
		printf("1\n");
	}
	if (b_count - f_count != 0) {
		printf("0\n");
	}
}

int front() {
	if (b_count - f_count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", Queue[f_count]);
	}
}

int back() {
	if (b_count - f_count == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", Queue[b_count - 1]);
	}
}