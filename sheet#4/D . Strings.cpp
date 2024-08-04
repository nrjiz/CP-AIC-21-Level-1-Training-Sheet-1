#include<iostream>
#include<string>
 
int main(){
    std::string first, second;
    std::getline(std::cin,first);
    std::getline(std::cin,second);
    
    std::cout<<first.size()<<' '<<second.size()<<'\n';
    std::string third = first+second;
    std::cout<<third<<'\n';
    char temp = first[0];
    first[0]=second[0];
    second[0]=temp;
    std::cout<<first<<' '<<second<<'\n';
    
    return 0;
}
