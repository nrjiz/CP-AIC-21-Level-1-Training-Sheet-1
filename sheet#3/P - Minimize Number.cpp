#include<iostream>
#include<vector>
 
int main(){
    int n;
    std::cin>>n;
    std::vector<int>arr(n);
    for(int i = 0 ; i < n ; ++i){
        std::cin>>arr[i];
    }
    bool allEven = true;
    int counter=0;
    while(allEven){
        for(int i = 0; i < n ; ++i){
            if(arr[i]%2!=0){
                allEven=false;
                break;
            }
            arr[i]/=2;
        }
        if(allEven){
            counter++;
        }
    }
    std::cout<<counter<<"\n";
    
}
