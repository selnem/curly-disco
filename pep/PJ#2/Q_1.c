#include <stdio.h>
#include <string.h>

#define BUF_SIZE 64
#define MAX_PRESENTATION_LIST 3
#define MAX_SEMESTER 8

typedef struct STUDENT {
    char name[BUF_SIZE];
    char ID[BUF_SIZE];
    int semester;
    char class_name[BUF_SIZE];
} STUDENT;

STUDENT s_list_align[]={0};

/* 출력 부분: 수정하지 마세요 */
void print_student(const STUDENT *s){
    printf("%-9s %-5s %5d %10s\n", s->name, s->ID, s->semester, s->class_name);
}
/* -------------------------- */


/* print_student_list 함수 구현 */
void print_student_list(STUDENT *student_arr,int numOfstudent){
    printf("\n%8s  %-11s %-5s %10s %14s\n", "번호", "이름", "학번", "학기", "수강과목");
    for(int i=0;i<numOfstudent-1;i++){
        for(int j=0;j<numOfstudent-i;j++){
            if(student_arr[j].semester>student_arr[j+1].semester){
                s_list_align[0]=student_arr[j];
                student_arr[j]=student_arr[j+1];
                student_arr[j+1]=s_list_align[0];
            }
        }
    }
    for(int i=0;i<numOfstudent;i++){
        printf("%3d번: ",i+1);
        print_student(&student_arr[i]);
    }
}
// 반드시 다음 코드 사용해서 출력하세요. 
// 가장 윗줄: printf("\n%8s  %-11s %-5s %10s %14s\n", "번호", "이름", "학번", "학기", "수강과목"); 이용하여 출력
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력 
/* -------------------------- */

/* find_student 함수 구현 */
// 반드시 다음 코드 사용해서 출력하세요.
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력
/* -------------------------- */

/* print_presentation_list 함수 구현 */
// 반드시 다음 코드 사용해서 출력하세요.
// 가장 윗줄: printf("<< 발표리스트 >>\n"); 이용하여 출력
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력
/* -------------------------- */


int main(void)
{
    /* 입력 부분: 수정하지 마세요 */
	STUDENT s_list[] = {
		{"Jihyeon", "2018001", 8, "class1" }, 
		{"Sujung", "2022015", 2, "class2"}, 
		{"Minjung", "2021016", 3, "class2"},
		{"Minji", "2021013", 4, "class4"},
		{"Sujung", "2020033", 5, "class3"},
		{"Heejoon", "2020010", 6, "class4"},
		{"Ayoon", "2019022", 5, "class1"},
        {"Jihyeon", "2019001", 7, "class5"},	
	};
    /* -------------------------- */

    // #1-2 구현 시 반드시 다음 코드 사용해서 출력하세요.
    // printf("\n찾으려는 학생의 이름 또는 수강과목을 입력하세요(종료는 exit): ");
    
    // #1-3 구현 시 반드시 다음 코드 사용해서 출력하세요.
    // printf("\n발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요: ");
    // printf("발표리스트에 추가할 학생 번호를 입력하세요: ");
    // printf("이미 발표리스트에 있는 학생입니다.\n");
    // printf("잘못된 번호입니다.\n");   
    // printf("발표리스트에서 삭제할 학생 번호를 입력하세요: ");
    // printf("삭제할 학생이 없습니다.\n");
    
    /* Put your answer */
    int studentNUM=sizeof(s_list)/sizeof(STUDENT);
    print_student_list(s_list,studentNUM);
    return 0;
}