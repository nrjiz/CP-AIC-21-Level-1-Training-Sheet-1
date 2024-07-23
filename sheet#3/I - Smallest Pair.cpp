#include<iostream>
#include<limits>
#include<vector>

int main(){
    
    int T;
    std::cin>>T;
    while(T--){
        int N;
        std::cin>>N;
        std::vector<int>arr(N);
        for(int i=0;i<N;++i){
            std::cin>>arr[i];
        }
        int min = std::numeric_limits<int>::max();
        for(int i=0;i<N-1;++i){
            
            for(int j=i+1;j<N;++j){
                int result=j-i+arr[i]+arr[j];
                if(result<min){
                    min=result;
                }
            }
        }
        std::cout<<min<<"\n";
    }
}
