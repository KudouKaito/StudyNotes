#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 6
#define MAXVALUE 99999999
int main(void)
{
    double eyes[N],nose_chin[N],ratio[N],diff[N][N],mmatch_value=MAXVALUE;
    int i,j,mmatch_value_i=N-1,mmatch_value_j=N-1; 
    /*mmatch_value_i,mmatch_value_j用来存储max match最优匹配的2张人脸序号*/
    for(i=0;i<N;i++)
    {
        scanf("%lf%lf",&eyes[i],&nose_chin[i]);
        ratio[i]=eyes[i]/nose_chin[i];
        diff[i][i]=0;
    }
    
    for ( i = 0; i < N; i++)
    {
        for (j = 0; j < i; j++)
        {
            diff[i][j] = fabs(ratio[i]-ratio[j]);
            printf("%lf\n",diff[i][j]);
            if (diff[i][j]<mmatch_value)
            {
                mmatch_value = diff[i][j];
                mmatch_value_i = i;
                mmatch_value_j = j;
            }
            
        }

    }

    printf("the best match is:");
    printf("%d and %d,its diff is %0.3lf\n",mmatch_value_i,mmatch_value_j,mmatch_value);
    system("pause");
    return 0;
    
}
