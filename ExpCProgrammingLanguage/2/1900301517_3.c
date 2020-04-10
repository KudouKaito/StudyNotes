#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) //实验二第3（2）题的参考解答
{
//num代表总人数，score用于记录当前输入的分数，sum记录总分，
//average记录平均分，failed记录不及格人数，所有分数都定为“整数”。
  int num=0, score=0,sum=0,average=0,failed=0; 
  while(1)
  {
    scanf("%d", &score);
    if(score<0) 
    {
      break;
    }
    else if(score<60) 
    { 
      failed++;
    }
    num++;
    sum+=score;
  }
  average=sum/num;
  printf("%d %d", average, failed);
  return 0;
}
