/*
 택시 기하학 두 점 사이 거리 d=|x1-x2|+|y1-y2|

 택시 기하학의 원 -> 원: 평면 상의 어떤 점에서 거리가 일정한 점들의 집합

 원점을 기준으로 생각 해보면 r=|-x2|+|-y2|  인 점들의 집합

 r=|x|+|y| -> 마름모 꼴 그래프
*/
#include <stdio.h>
#define PI 3.14159265358979323846; // math.h M_PI를 사용해도 된다.

int main(){
    int r;

    scanf("%d",&r);

    double T_circle=2*r*r;
    double U_circle=(T_circle/2)*PI;

    printf("%lf\n",U_circle);
    printf("%lf\n",T_circle);

    return 0;
}