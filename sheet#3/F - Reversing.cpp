#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<long long>arr(n);
    for(int i=0;i<n;++i){
        
        std::cin>>arr[n-1-i];
        
    }
    for(int i=0;i<n;++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}
