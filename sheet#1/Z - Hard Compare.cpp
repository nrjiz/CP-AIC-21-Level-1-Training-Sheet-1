#include<iostream>
#include<cmath>
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    long double r1 = b*std::log(a);
    long double r2 = d*std::log(c);
    if(r1>r2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
