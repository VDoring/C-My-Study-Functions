//���� ��ȣ�� �Բ� ���� ���� ���
#include <stdio.h>
#include <stdlib.h>
 
void ReadAndPrint(const char *fname);
int main(void)
{
    char fname[200];
 
    printf("���� �̸�: ");
    //������ ������ ���� �̸� �Է��� �� gets_s(fname,sizeof(fname));
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
    //fp = fopen(fname,"r")�� fopen_s(&fp,fname,"r")�� ���� ��� ����
    fopen_s(&fp,fname,"r");//�б� ���� ���� ����
   
    if(fp == NULL)
    {
        perror("���� ���� ����");//���� ���
        exit(0); //���α׷� ����
    }
 
    while(!feof(fp))//������ ���� ������ �ʾҴٸ� �ݺ�
    {
        line++;
        fgets(buf,sizeof(buf),fp);
       
        printf("%3d: %s",line,buf);//�ϳ��� ���ڸ� �о�ͼ� �ܼ� ȭ�鿡 ���
    }
 
    fclose(fp);//���� ��Ʈ�� �ݱ�
    printf("\n���� ��:%d\n",line);
}

//https://ehclub.co.kr/1138