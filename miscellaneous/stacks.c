#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int a;
	double b;
} DATA;

DATA *base;
DATA *end;
DATA *top;

#define STACKSIZE 5

int push(DATA* data) {
	int ok;

	if (top == end) {
		ok = 0;
	} else {
		memcpy(top, data, sizeof(DATA));
		top = top + 1;
		ok = 1;
	}
	return ok;
}

DATA* pop() {
	DATA* data;

	if (top == base) {
		data= NULL;
	} else {
		top = top - 1;
		data = top;
	}
	return data;
}

int main() {
	DATA data, *pdata;
	
	base = (DATA*)malloc(STACKSIZE * sizeof(DATA));
	end = base + STACKSIZE;
	top = base;

	for (int i = 0; ;i++) {
		data.a = i;
		data.b = i * 2;
		if (!push(&data)) {
			break;
		}
	}
	
	printf("first item = %d : %f \n", base->a, base->b);
	pdata = base + 4;
	printf("last item = %d : %f \n\n", pdata->a, pdata->b);

	free(base);
	return 0;
}
