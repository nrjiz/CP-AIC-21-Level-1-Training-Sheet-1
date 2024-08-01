#include<iostream>
#include<vector>

int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int> frequency_array(m+1,0);
    for(int i = 0; i < n ; ++i){
        int n;
        std::cin>>n;
        frequency_array[n]++;
    }
    for(int i = 1;i<=m;++i){
        std::cout<<frequency_array[i]<<'\n';
    }
}
