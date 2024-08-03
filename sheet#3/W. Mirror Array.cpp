#include<iostream>
#include<vector>
 
int main(){
    int n,m;
    std::cin>>n>>m;
    
    while(n--){
        std::vector<int> arr (m);
        for (int i=0;i<m;++i){
            std::cin>>arr[i];
        }
        for (int i=m-1;i>=0;--i){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<"\n";
    }
}
