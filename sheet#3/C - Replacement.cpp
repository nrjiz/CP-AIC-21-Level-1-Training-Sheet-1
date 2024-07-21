#include<iostream>
#include<vector>

int main(){
    
    int n;
    std::cin>>n;
    std::vector<int>arr(n);
    for(int i=0;i<n;++i){
       int input;
       std::cin>>input;
       input>0?arr[i]=1:input<0?arr[i]=2:0;
    }
    for(int i=0;i<n;++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}
