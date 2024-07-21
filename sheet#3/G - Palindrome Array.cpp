#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<long long>arr(n);
    
    for(int i=0;i<n;++i){
        std::cin>>arr[i];
    }
    std::string str="YES";
    for(int i=0;i<(n+1)/2;++i){//even n/2 is true
        if(arr[i]!=arr[n-1-i]){
            str="NO";
            break;
        }
    }
    std::cout<<str<<"\n";
    
    
}
