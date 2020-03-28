#include<stdio.h>
int main(void)
{
	char sex;
	float faHeight, moHeight, hight, sportsGrowth, dietGrowth;
    char sports, diet;
    
	scanf("%f %f %c %c %c", &faHeight, &moHeight, &sex, &sports, &diet);
    switch(sex) {
        case 'M':hight=(faHeight + moHeight)*0.54f;break;
        case 'F':hight=(faHeight*0.923f + moHeight)/2.0f;break;
    }
    switch(sports) {
        case 'Y':sportsGrowth=hight*0.02f;
    }
    switch(diet) {
        case 'Y':dietGrowth = hight*0.015f;
    }
    hight+=sportsGrowth + dietGrowth;
    printf("%.2f", hight);
    return 0;
}
