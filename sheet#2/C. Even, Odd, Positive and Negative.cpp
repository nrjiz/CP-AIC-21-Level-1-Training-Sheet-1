#include<iostream>

int main(){
    
    int n;
    scanf("%d",&n);
    int counter=n, even=0,odd=0,positive=0,negative=0;
    while(counter>0){
        int input;
        scanf("%d",&input);
        input%2==0?++even:++odd;
        input>0?++positive:input==0?:++negative;
        --counter;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,positive,negative);
}
//4:18//3:38//3:06
