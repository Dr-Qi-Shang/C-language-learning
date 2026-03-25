/*任务描述
本关任务：螺旋矩阵是指一个呈螺旋状的矩阵，从左上角第 1 个格子开始，按顺时针螺旋方向填充逐渐增大的数字，即矩阵的元素值由第一行开始到右边不断变大，再向下变大，向左变大，向上变大，如此循环，直到填满矩阵的所有元素。请编程输出以 (0,0) 为起点、以数字 1 为起始数字的 n×n 的螺旋矩阵。

编程要求
根据提示，在右侧编辑器补充代码，生成螺旋矩阵。

要求使用递归或非递归两种问题求解策略之一编写程序。
本题给的初始代码为递归思路，如需使用非递归，可以删掉初始代码

测试说明
输入说明：
输入一个数字 n ，表示矩阵的阶数。（1<=n<=10）

输出说明：
输出螺旋矩阵，每个数据之间用制表符“\t”隔开。如果输入的 n 小于 1 或者大于 10，则输出“Invalid input! n should be between 1 and 10.”，并结束程序。

平台会对你编写的代码进行测试：

测试输入1：
4
预期输出1：

1    2    3    4    
12    13    14    5    
11    16    15    6    
10    9    8    7    
输入2：
5
预期输出2：

1    2    3    4    5    
16    17    18    19    6    
15    24    25    20    7    
14    23    22    21    8    
13    12    11    10    9  
开始你的任务吧，祝你成功！*/
#include<stdio.h>
#include <stdlib.h>
#define N 10

void PrintArray(int a[][N], int n);
void SetArray(int a[][N], int n, int m, int *len);
void InitializeArray(int a[][N], int n);

int main(void)
{
    int a[N][N], n;

    scanf("%d", &n);  
    //=====begin=====
    if (n < 1 || n > 10) {
        printf("Invalid input! n should be between 1 and 10.\n");
        return 0;
    }
    InitializeArray(a, n);
    PrintArray(a, n);
    //======end======
    return 0;
}

//函数功能：通过控制走过指定的圈数，递归生成n×n阶螺旋矩阵，m表示圈数，从外圈到内圈，len表示填充到矩阵的数字
void SetArray(int a[][N], int n, int m, int *len)
{
    //=====begin=====
    int i, j;
    
    // 递归终止条件：如果圈数已经超过内圈，返回
    if (m >= (n + 1) / 2) {
        return;
    }
    
    // 1. 从左到右填充第m行
    for (j = m; j < n - m; j++) {
        a[m][j] = (*len)++;
    }
    
    // 2. 从上到下填充第n-m-1列
    for (i = m + 1; i < n - m; i++) {
        a[i][n - m - 1] = (*len)++;
    }
    
    // 3. 从右到左填充第n-m-1行
    for (j = n - m - 2; j >= m; j--) {
        a[n - m - 1][j] = (*len)++;
    }
    
    // 4. 从下到上填充第m列
    for (i = n - m - 2; i > m; i--) {
        a[i][m] = (*len)++;
    }
    
    // 递归处理内圈
    SetArray(a, n, m + 1, len);
    //======end======
}

//函数功能：初始化，以调用螺旋矩阵生成函数
void InitializeArray(int a[][N], int n)
{
    //=====begin=====
    int len = 1;
    SetArray(a, n, 0, &len);
    //======end======
}

//函数功能：输出n×n阶矩阵a
void PrintArray(int a[][N], int n)
{    
    //=====begin=====
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            if (j < n - 1) {
                printf("\t");
            }
        }
        printf("\n");
    }
    //======end======
}
