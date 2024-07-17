#include<iomanip>
#include<iostream>
 
int main(){
    const double PI =3.141592653;
    double radius;
    std::cin>>radius;
    std::cout<<std::fixed<<std::setprecision(9)<<radius*radius*PI;
    return 0;
}
//2 minutes
