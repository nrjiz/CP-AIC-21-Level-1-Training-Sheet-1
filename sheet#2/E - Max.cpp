#include<iostream>
int main(){
    
    int n;
    scanf("%d",&n);
    
    int counter=n;
    int largest=-2e9;
    while(counter>0){
        int input;
        scanf("%d",&input);
        (input<largest)?:largest=input;
        --counter;
    }
    printf("%d\n",largest);
}
