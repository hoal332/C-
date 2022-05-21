#define _CRT_SECURE_NO_WARANINGS
#include <stdio.h>
#include <string.h>
//转译字符：转变了原来的意思
//printf("as\ncd");这里的\n就是一个转译字符

//int main()
//{
//    //\'
//    printf("%c", '\'');//打出来就是'    //%c是输出字符 %s是输出字符串
//    printf("%s", "\"");
//    //printf在打印数据时，可以指定打印的格式
//    printf("\a");
//    return 0;
//}



//int main()
//{
//    // \ddd---把这三位数的八进制转换为10进制后，以这个10进制来找到对应的ASCII码值
//
//    printf("%c\n", '\130');//8进制的130 是十进制的多少呢？
//    //X -- ASCII码值是88
//
//    // \xdd---dd表示两个十六进制数字
//
//
//   //习题
//    
//    printf("%d\n", strlen("c:\test\328\test.c"));//使用strlen时 要加上头文件 #include <string.h>
//
//    //有多少个字符呢？
//    //8进制没有八！！！
//    return 0;
//}

//#include <stdio.h>


//int main()
//{
//    int input = 0;//输入的值
//    printf("想不想要xss？（1/0）>:");
//    scanf("%d", &input);
//    if (input == 1)
//        printf("英语连续打卡 c 70节");
//    else
//        printf("去玩吧啥都不要动");
//    return 0;
//}

//#include <stdio.h>

int main()
{
    int line = 0;
    while (line < 30000)
    {
        printf("xie");
        line++;
    }
      if (line == 30000)
       {
                printf("hao");
       }
        

            return 0;
}