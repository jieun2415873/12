
#include <stdio.h>
#include <string.h>

// 학생 구조체 정의
struct student {
    int ID;
    char name[30];
    float grade;
};

int main(void) {
    // 구조체 변수 선언 및 초기화
    struct student s1 = {202611, "Jieun", 3.5};

    // 구조체 멤버 값 변경
    s1.ID = 123456;
    strcpy(s1.name, "Juyeop");
    s1.grade = 4.2;

    // 구조체 멤버 출력
    printf("ID : %d\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);

    return 0;
}
