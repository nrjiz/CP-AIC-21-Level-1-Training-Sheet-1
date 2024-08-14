#include<iostream>
 
int main(){
    std::string input;
    std::cin>>input;
    std::string target="hello";
    
    int i=0;
    int j=0;
    while(i<input.length()&&j<target.length()){
        if(input[i]==target[j]){
            ++j;
        }
        ++i;
    }
    if(j==5){
        std::cout<<"YES\n";
    }else{
        std::cout<<"NO\n";
    }
}
