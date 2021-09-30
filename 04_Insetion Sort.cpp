#include <stdio.h>

// 시간 복잡도는 선택, 버블 정렬과 같은 O(N^2)이지만
// 내부 연산은 필요할 때만 정렬의 순서를 변경해주므로 
// 실질적으로 선택, 버블 정렬보단 빠르다.
// 거의 정렬된 상태라면 내부 연산이 거의 일어나지 않아
// '거의 정렬된 상태'에선 어떤 알고리즘보다도 빠르다. 
int main(void) {
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 9; i ++)  {
		j = i;
		while(array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
