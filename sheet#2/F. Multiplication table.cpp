#include<iostream>
 
int main(){
    
    int n;
    scanf("%d",&n);
    
    int counter=1;
    while(counter<13){
        printf("%d * %d = %d\n",n,counter,n*counter);
        ++counter;
    }
    
    return 0;
}
