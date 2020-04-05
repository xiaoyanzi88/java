#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;//文件指针
  	int schoolnumber, i;
	char name[10];

    /*文件的打开*/
    fp=fopen("D:\\C++mark.txt","w");//fopen打开文件，这个文件可以是当前不存在的。“w”以写入的形式打开，“r”以读的形式打开
    if(fp==NULL) //判断如果文件指针为空
    {
        printf("File cannot open! " );
        exit(0);//在以0的形式退出，必须在文件开头有#include <stdlib.h>,stdlib 头文件即standard library标准库头文件
    }

    //写入东西
   	for(i=0; i<3; i++)						// 写入数据
	{
		printf("iput name and schoolnumber :\n");
		scanf("%s %d", & name,&schoolnumber);
		fprintf(fp, "%s,%d\n",name,schoolnumber);
	}
 
     //关闭文件
    fclose(fp);
    return 0;
}