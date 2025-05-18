#include<stdio.h>

int main(){
    // 11
    /*
    1
    2
    */

    int age = 40;
    printf(" %d \n",age);      /*在变量隐式数据转换中  double>float>long>int>short>char
    小转大时不会出现问题。大转小会被截取char字符A等可ascll转换.例：A->65*/
    float shenchang = 170.6;
    printf(" %.1f \n",shenchang);   //显式转换如 float a =1.2；
                                    //int a = (int)a；
                                    //printf("%d",a);   最终结果为1.
    double chachong = 18.745967;
    printf(" %f \n",chachong);
    long bi = 1930230321;
    printf(" %ln ? \n",bi);
    short join = 26;
    printf(" %d ? \n",join);
    unsigned int xiao = 999;
    xiao = 26;
    printf(" %d ? \n",xiao);
    char gender='M';
    printf("ƹƹ %c \n",gender);
    char jod[] = "С";
    printf("  %s \n",jod);
    return 0;
}