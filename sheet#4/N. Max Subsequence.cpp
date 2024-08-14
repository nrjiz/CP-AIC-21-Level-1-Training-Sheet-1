#include<iostream>
 
int main(){
    
    int n;
    std::string s;
    std::cin>>n>>s;
    int i =1;
    int size =1;
    
    while(i<n){
        if(s[i]!=s[i-1]){
            ++size;
        }
        ++i;
    }
    
    
    std::cout<<size<<'\n';
    
