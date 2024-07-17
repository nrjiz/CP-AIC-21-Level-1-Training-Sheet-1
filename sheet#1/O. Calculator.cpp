#include <iostream>
 
int main(){
    
    int a, b;
    char c;
    std::cin>>a>>c>>b;
    int answer;
    
    switch(c){
        case '+':
        answer=a+b;
        break;
        case '-':
        answer=a-b;
        break;
        case '*':
        answer=a*b;
        break;
        case '/':
        answer=a/b;
        break;
        default:
        std::cerr<<"invalide operator"<<"\n";
        return 1;
    }
    std::cout<<answer<<"\n";
    return 0;
    
}

//2:45
