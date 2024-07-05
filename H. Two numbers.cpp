#include<cstdio>
#include<cmath>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    double result =static_cast<double> (a)/b;
    printf("floor %d / %d = %d\n",a,b,static_cast<int>(std::floor(result)));
    printf("ceil %d / %d = %d\n",a,b,static_cast<int>(std::ceil(result)));
    printf("round %d / %d = %d\n",a,b,static_cast<int>(std::round(result)));
  return 0;
}
//4min:52sec
//another way
#include <iostream>
#include <cmath>

int main(){
    double a, b;
    std::cin>>a>>b;
    double result=a/b;
    
    std::cout<<a<<" / "<<b<<" = "<<static_cast<int>(std::floor(result))<<"\n";
    std::cout<<a<<" / "<<b<<" = "<<static_cast<int>(std::ceil(result))<<"\n";
    std::cout<<a<<" / "<<b<<" = "<<static_cast<int>(std::round(result))<<"\n";


    return 0;
    
}
