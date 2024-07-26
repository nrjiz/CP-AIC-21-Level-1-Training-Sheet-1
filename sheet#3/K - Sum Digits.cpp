#include<iostream>

int main(){
    int n;
    std::cin>>n;
    std::string digits;
    std::cin>>digits;
    int sum=0;
    for(int i = 0 ; i <n;++i){
        sum+= digits[i]-48;
    }
    std::cout<<sum<<"\n";
    
}
