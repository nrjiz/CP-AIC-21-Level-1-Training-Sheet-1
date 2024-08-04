#include<iostream>

int main(){
    std::string str;
    std::cin>>str;
    int sum=0;
  
    for(char ch : str){
        sum+= ch-'0';
    }
    std::cout<<sum<<'\n';
}
