#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cin>>n;
    long long sum=0;
    for (int i=0;i<n;++i){
        int input;
        std::cin>>input;
        sum+=input;
    }
    std::cout<<std::abs(sum)<<"\n";
    return 0;
}
