#include<iostream>
#include<cmath>
bool isPrime(int numb){
    for(int i = 2;i<=sqrt(numb);++i ){
       if(numb%i==0)return false; 
    }
    return true;
}
int main(){
    int input;
    scanf("%d",&input);
    int counter=2;
    while(counter<=input){
        !isPrime(counter)?:printf("%d ",counter);
        ++counter;
    }
    return 0;
}
////////////////////////////////////////////////////

#include<iostream>
#include<cmath>

int main(){
    
    int n;
    scanf("%d",&n);
    
    int counter=2;
    while(counter<=n){
        bool isPrime=true;
        for(int i=2;i<=sqrt(counter);++i){
            
            if(counter%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            printf("%d ",counter);
        }
        ++counter;
    }
    return 0;
}
