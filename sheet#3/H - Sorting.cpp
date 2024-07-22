#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;++i){
        std::cin>>arr[i];
    }
    
    bool swapped;
    
        for(int i=0;i<n-1;++i){
            swapped=false;
            for(int j=0;j<n-1-i;++j){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
                }
            }
            if(!swapped){
                break;
            }
        }
    
    for( int i=0;i<n;++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    return 0;
}
