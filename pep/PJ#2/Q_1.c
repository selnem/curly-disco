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
        for(int j=0;j<numOfstudent-i-1;j++){
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
int find_student(STUDENT *list,int size){
    char wordOfserch[BUF_SIZE];
    scanf("%s",wordOfserch);
    int find_bool=2;//0:exit,1:find,2:can't find
    if(strcmp("exit",wordOfserch)==0){
        find_bool=0;
        return find_bool;
    }
    for(int i=0;i<size;i++){
        int k=0;
        if(strcmp(list[i].name,wordOfserch)==0){
            find_bool=1;
            k=1;
        }
        else if(strcmp(list[i].class_name,wordOfserch)==0){
            find_bool=1;
            k=1;
        }
        if(k==1){
            printf("%3d번: ",i+1);
            print_student(&list[i]);
        }
    }
    if(find_bool==2){
        printf("해당 학생 정보를 찾을 수 없습니다.");
    }
    return find_bool;
}

/* find_student 함수 구현 */
// 반드시 다음 코드 사용해서 출력하세요.
// 학생 번호: printf("%3d번: ",변수); 이용하여 출력
// 학생 정보: print_student 함수 이용하여 출력
/* -------------------------- */

/* print_presentation_list 함수 구현 */
void print_presentation_list(const STUDENT *stu_list,int *pr_list ,int cnt){
    printf("<< 발표리스트 >>\n");
    for(int i=0;i<cnt;i++){
        printf("%3d번: ",i+1);
        print_student(&stu_list[pr_list[i]]);
    }
    printf("총 발표명 수: %d명",cnt);
}
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
    int size=sizeof(s_list)/sizeof(STUDENT);//학생수
    //#1-1
    print_student_list(s_list,size);

    //#1-2
    
    do{
        printf("\n찾으려는 학생의 이름 또는 수강과목을 입력하세요(종료는 exit): ");

    }while(find_student(s_list,size));

    //#1-3
    int mode,st_num,i;
    int cnt=0;
    int pr_StuList[MAX_PRESENTATION_LIST]={0};
        do{
            printf("\n발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요: ");
            scanf("%d",&mode);
            switch (mode){
                case 1:
                    printf("발표리스트에 추가할 학생 번호를 입력하세요: ");
                    scanf("%d",&st_num);
                    if(!(0<st_num&&st_num<=size)){
                        printf("잘못된 번호입니다.\n");
                    }
                    else{
                        for(i=0;i<cnt;i++){
                            if(pr_StuList[i]==st_num){
                                printf("이미 발표리스트에 있는 학생입니다.\n");
                                break;
                            }
                        }
                        if(i==cnt){
                            pr_StuList[cnt++]=st_num-1;
                            print_presentation_list(s_list,pr_StuList,cnt);
                        }
                    }
                    break;
                case 2:
                    printf("발표리스트에서 삭제할 학생 번호를 입력하세요: ");
                    scanf("%d",&st_num);
                    if(st_num<1||st_num>cnt){
                        printf("삭제할 학생이 없습니다.\n");
                    }
                    else{
                       for(int t=st_num-1;t<cnt-1;t++){
                            pr_StuList[t]=pr_StuList[t+1];
                       }
                       cnt--;
                       print_presentation_list(s_list,pr_StuList,cnt);
                    }
                case 3:
                    break;
                default:
                    printf("모드를 재입력하세요");
                    break;
            }
        }while(mode!=3&&cnt<3);
    return 0;
}