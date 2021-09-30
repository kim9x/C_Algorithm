#include <stdio.h>

int main(void) {
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++) {
		min = 9999;
		for(j = i; j < 10; j++) {
			if(min > array[j]) {
				// 가장 작은 값을 찾아냄. 
				min = array[j];
				index = j ;
			}
		}
		// 가장 작은 값을 array[i]에 넣어주고
		// array[i]에 있던 값을 array[index] 값으로 넣어줌.
		// => 스와핑 
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
