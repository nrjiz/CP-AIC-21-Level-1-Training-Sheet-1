//solved using delimiter
#include<iostream>
#include<string>

int main(){
    std::string s;
    std::getline(std::cin,s,'\\');
    std::cout<<s<<'\n';
}
///////
// solved using a for loop:
#include<iostream>
#include<string>

int main(){
    
    std::string s;
    std::getline(std::cin,s);
    for(int i=0;i<s.length();++i){
        if(s[i]=='\\')break;
        std::cout<<s[i];
    }
    std::cout<<'\n';
  
}
