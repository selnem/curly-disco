#include<stdio.h>
int main(){
    int array[5][5]={{1,0,0,1,0},{1,1,0,1,1},{0,1,0,0,1},{1,1,1,0,0},{0,0,1,1,1}};
    int found = 0; // 패턴 발견 여부 확인 변수
int total_memory = 0; // 총 메모리 크기를 저장할 변수
// 세 개의 연속된 1을 찾기
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 3; j++) { 
if (array[i][j] == 1 && array[i][j+1] == 1 && array[i][j+2] == 1) {
// 패턴을 찾은 경우
printf("Found pattern at row %d, starting at column %d\n", i, j);
printf("Memory address of start: %p\n", &array[i][j]);
// 세 개의 값이 차지하는 메모리 크기를 계산하고 누적
int pattern_size = 3 * sizeof(int);
printf("Memory size of this pattern: %d bytes\n", pattern_size);
total_memory += pattern_size; // 총 메모리 크기에 추가
found = 1; // 패턴이 발견됨을 표시
}
}
}
// 패턴이 발견되었을 때 총 메모리 크기 출력
if (found) {
printf("Total memory size of all patterns: %d bytes\n", total_memory);
} else {
printf("No pattern found.\n");
}
return 0;








}