#include<iostream>
 
int main(){
    
    int A, B;
    std::cin>>A>>B;
    std::string S;
    std::cin>>S;
    
    if(S.length()!=A+B+1){
        std::cout<<"No\n";
        return 0;
    }
    if(S[A]!='-'){
        std::cout<<"No\n";
        return 0;
    }
    for(int i=0;i<S.length();++i){
        if(i!=A&& !isdigit(S[i])){
            std::cout<<"No\n";
            return 0;
        }
    }
    
    std::cout<<"Yes\n";
    
}
