#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    if((x>0.0)&&(y>0.0))
        printf("First quadrant");
    else if((x<0.0)&&(y>0.0))
        printf("Second quadrant");
    else if((x<0.0)&&(y<0.0))
        printf("Third quadrant");
    else if((x>0.0)&&(y<0.0))
        printf("Fourth quadrant");
    else
        printf("Lies on the axis");
    return 0;
}
