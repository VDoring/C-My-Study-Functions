//라인 번호와 함께 파일 내용 출력
#include <stdio.h>
#include <stdlib.h>
 
void ReadAndPrint(const char *fname);
int main(void)
{
    char fname[200];
 
    printf("파일 이름: ");
    //공백을 포함한 파일 이름 입력할 때 gets_s(fname,sizeof(fname));
    scanf_s("%s",fname,sizeof(fname));
 
    ReadAndPrint(fname);
    return 0;
}

int Distinction(char ch);

void ReadAndPrint(const char *fname)
{
    FILE *fp;
    char buf[4096];
    int line=0;
    //fp = fopen(fname,"r")과 fopen_s(&fp,fname,"r")는 같은 기능 수행
    fopen_s(&fp,fname,"r");//읽기 모드로 파일 열기
   
    if(fp == NULL)
    {
        perror("파일 열기 실패");//에러 출력
        exit(0); //프로그램 종료
    }
 
    while(!feof(fp))//파일의 끝을 만나지 않았다면 반복
    {
        line++;
        fgets(buf,sizeof(buf),fp);
       
        printf("%3d: %s",line,buf);//하나의 문자를 읽어와서 콘솔 화면에 출력
    }
 
    fclose(fp);//파일 스트림 닫기
    printf("\n라인 수:%d\n",line);
}

//https://ehclub.co.kr/1138