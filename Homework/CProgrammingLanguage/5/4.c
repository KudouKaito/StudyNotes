#include <stdio.h>
#define N 5
void input(int wn[],char name[][20],int n);
void sort(int wn[],char name[][20],int n);
void find(int the_wn,char the_name_accept[20],int wn[],char name[][20],int n);
void exchang(char str1[20],char str2[20]);
void str_cover(char covered[20],char str[20]);

int main(void)
{
    int worknumber[N];//保存工号数组
    char name[N][20];//保存职工姓名
    int the_wn;
    char the_name_accept[20];
    input(worknumber,name,N);
    sort(worknumber,name,N);
    scanf("%d",&the_wn);
    find(the_wn,the_name_accept,worknumber,name,N);
    printf("%s",the_name_accept);
    return 0;
}

void input(int wn[],char name[][20],int n)
{
    int i;
    printf("Please input %d lines with names of worker and their worknumbers as \"name worknumber\":\n",n);
    for(i=0;i<n;i++)
        scanf("%s%d",name[i],&wn[i]);
}
void sort(int wn[],char name[][20],int n)
{
    int i,j,k,min,wn_tmp;
    char name_tmp[20];
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(wn[min]>wn[j])
                min=j;
        }
        wn_tmp=wn[i];
        wn[i]=wn[min];
        wn[min]=wn_tmp;
        exchang(name[i],name[min]);
    }
}
void find(int the_wn,char the_name_accept[20],int wn[],char name[][20],int n)
{
    int l=0,r=n-1,middle;
    while(wn[middle=(l+r)/2]!=the_wn)
    {
       if(wn[middle]>the_wn) 
           r=middle-1;
       else
           l=middle+1;
       if(r<=l&&wn[r]!=the_wn)
       {
           str_cover(the_name_accept,"不存在");
           return;
       }
    }
    str_cover(the_name_accept,name[middle]);
}
void exchang(char str1[20],char str2[20])
{
    char tmp[20];
    str_cover(tmp,str1);
    str_cover(str1,str2);
    str_cover(str2,tmp);
}
void str_cover(char covered[20],char str[20])
{
    int k;
    for(k=0;str[k]!='\0';k++)
        covered[k]=str[k];
    covered[k]='\0';
}

