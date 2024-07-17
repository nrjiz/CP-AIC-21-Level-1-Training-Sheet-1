#include<cstdio>
 
int main(){
    float a;
    scanf("%f",&a);
    if(a<0||a>100){
        printf("Out of Intervals");
    }else if(a>=0&&a<=25){
        printf("Interval [0,25]");
    }else if(a<=50){
        printf("Interval (25,50]");
    }else if(a<=75){
        printf("Interval (50,75]");
    }else if(a<=100){
        printf("Interval (75,100]");
    }
}
