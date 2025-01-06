#include<stdio.h>
int main()
{
    int length;
    printf("enter a length :");
    scanf("%d",&length);
    int breadth;
    printf("enter a breadth");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2*(length + breadth);
    if(area>perimeter){
        printf("area is greater");
    }
    if(area<perimeter){
        printf("area is smaller");
    }
    if(area==perimeter){
        printf("area is equal to perimeter");
    }
    return 0;
}