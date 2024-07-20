#include<iostream>
#include<cmath>
int getGcd(int a, int b){
    //a=a/b*b+a%b
    //when a%b==0 return b
    //next iteration a = b? and b =a%b
    while(a%b!=0){
        int temp=a;
        a=b;
        b=temp%b;
    }
    return b;
}
int main(){
    int a,b;
    std::cin>>a>>b;

    int gcd =getGcd(a,b);
    std::cout<<gcd;
    return 0;
    
    
    
}
