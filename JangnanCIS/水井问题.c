/* 涂色游戏:
 * 有一个格数为N*N的正方形方格(N为大于等于3的奇数), 现要在格子上涂色
 * 初始中间默认涂有一个颜色S(没啥特殊意义
 * 每将一个格子涂上颜色X(可以覆盖O), 其相邻格子(前、后、左、右)都会自动染上颜色O(不会覆盖其它颜色)
 * 整个方格涂满颜色算完成, 现要求手动填涂格子最少的方案
 */

#include <stdio.h>
#define N 5
int fillX(int,int);
void fillO();
int isFull();
void print();
void clear();
void clearAll();
void spread(int n,int m);

char grid[N][N]={[N/2][N/2]='S'}; 
char tmp[N][N]={[N/2][N/2]='S'}; 


int main()
{
    int i,j,flag=0;
    for(i=3;i<N*N/2;i++) {
        for(j=0;j<N*N;j++) {
            if(fillX(i,j)==0)
                flag=1;
//                goto PRINT;
            clear();
            clearAll();
        }
        if(flag==1)break;
    }
PRINT:
    print();
    return 0;
}

int fillX(int n,int position)
{
    int i;
    if(position==N*N/2)
        position++;
    if(n==1) {
        grid[position/N][position%N]='X';
        fillO();
        if(isFull()) {
    print();
    putchar('\n');
            return 0;
        } else {
            grid[position/N][position%N]='\0';
            clear();
            return 1;
        }
    } else {
        for(i=position+1;i<N*N-n;i++) {
            grid[position/N][position%N]='X';
            if(fillX(n-1,i)) {
                grid[position/N][position%N]='\0';
                continue;
            }
            else {
                return 0;
            }
        }
    }
    return 1;
}

// Full return 0, or return 1;
int isFull()
{
    int i,j;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if('\0'==tmp[i][j])
                return 0;
        }
    }
    return 1;
}

void print()
{
    int i,j;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            putchar((tmp[i][j]=='\0')?' ':tmp[i][j]);
        }
        putchar('\n');
    }
}

void clear()
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            tmp[i][j]='\0';
    tmp[N/2][N/2]='S'; 
}
void clearAll()
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            grid[i][j]='\0';
    grid[N/2][N/2]='S'; 
}

void spread(int n,int m)
{
    if('X'==grid[n][m]) {
        // 上
        tmp[n][m]='X';
        if(n-1>=0 && '\0'==tmp[n-1][m])
            tmp[n-1][m]='O';
        // 下
        if(n+1<N && '\0'==tmp[n+1][m])
            tmp[n+1][m]='O';
        // 左
        if(m-1>=0 && '\0'==tmp[n][m-1])
            tmp[n][m-1]='O';
        // 右
        if(m+1<N && '\0'==tmp[n][m+1])
            tmp[n][m+1]='O';
    }
}

void fillO()
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            spread(i,j);
}
