#include<cstdio>
//the following codes are wrong because 10^5*10*5 needs is a long long incase you re working with C++17
int main(){
     int a, b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d - %d = %d\n",a,b,a-b);
}

#include <iostream>

int main(){
    int a, b;
    std::cin>>a>>b;
    std::cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
    std::cout<<a<<" * "<<b<<" = "<<a*b<<"\n";
    std::cout<<a<<" - "<<b<<" = "<<a-b<<"\n";
    return 0;
    
}

//the correct sample would use long long
#include<cstdio>
 
int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld + %lld = %lld\n",a,b,a+b);
    printf("%lld * %lld = %lld\n",a,b,a*b);
    printf("%lld - %lld = %lld\n",a,b,a-b);
    return 0;
}
