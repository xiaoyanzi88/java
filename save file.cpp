#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;//�ļ�ָ��
  	int schoolnumber, i;
	char name[10];

    /*�ļ��Ĵ�*/
    fp=fopen("D:\\C++mark.txt","w");//fopen���ļ�������ļ������ǵ�ǰ�����ڵġ���w����д�����ʽ�򿪣���r���Զ�����ʽ��
    if(fp==NULL) //�ж�����ļ�ָ��Ϊ��
    {
        printf("File cannot open! " );
        exit(0);//����0����ʽ�˳����������ļ���ͷ��#include <stdlib.h>,stdlib ͷ�ļ���standard library��׼��ͷ�ļ�
    }

    //д�붫��
   	for(i=0; i<3; i++)						// д������
	{
		printf("iput name and schoolnumber :\n");
		scanf("%s %d", & name,&schoolnumber);
		fprintf(fp, "%s,%d\n",name,schoolnumber);
	}
 
     //�ر��ļ�
    fclose(fp);
    return 0;
}