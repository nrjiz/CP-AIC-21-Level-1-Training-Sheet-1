#include<iostream>
int main(){
    int n;
    std::cin>>n;
    if(n==1){
        std::cout<<"0\n";
        return 0;
    }else if(n==2){
        std::cout<<"1\n";
        return 0;
    }
    
    long long a=0,b=1,fib=0;
    for(int i = 3;i<=n;++i){
        fib=a+b;
        a=b;
        b=fib;
    }
    std::cout<<fib<<"\n";
    return 0;
    
} 
/////////////////////////////////////////
#include<iostream>
#include<vector>
 
int main(){
    int n;
    std::cin>>n;
    std::vector<long long>arr(50);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;++i){
        arr[i]=arr[i-1]+arr[i-2];
    }
    std::cout<<arr[n-1]<<"\n";
}
