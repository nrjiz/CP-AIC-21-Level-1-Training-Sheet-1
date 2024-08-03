#include<iostream>
#include<vector>
 
int main(){
    int n,q;
    std::cin>>n>>q;
    
    std::vector<long long> arr (n+1,0);
    
    for(int i=1;i<=n;++i){
        int num;
        std::cin>>num;
        arr[i]=arr[i-1]+num;
    }
    
    while(q--){
        int q1,q2;
        std::cin>>q1>>q2;
        
        std::cout<<arr[q2]-arr[q1-1]<<"\n";
    }
}
