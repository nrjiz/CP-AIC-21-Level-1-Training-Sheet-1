#include<iostream>
#include <limits> 

int main(){
    int n;
    std::cin>>n;
    int lowest=std::numeric_limits<int>::max();
    int index;
    for(int i=0;i<n;++i){
        int input;
        std::cin>>input;
        if(input<lowest){
            lowest=input;
            index=i+1;
        }
    }
    printf("%d %d\n",lowest,index);
}
