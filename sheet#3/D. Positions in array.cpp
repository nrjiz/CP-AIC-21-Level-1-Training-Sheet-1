#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;++i){
        int input;
        std::cin>>input;
        if(input<=10){
            printf("A[%d] = %d\n",i,input);
        }
    }
}
