#include<iostream>
#include<vector>
#include<algorithm>

bool isPermutation(std::vector<int> &a,std::vector<int> &b){
    
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    return a==b;
}

int main(){
    int N;
    std::cin>>N;
    std::vector<int> A(N);
    std::vector<int> B(N);
    
    for( int i=0;i<N;i++){
        std::cin>>A[i];
    }
    for( int i=0;i<N;i++){
        std::cin>>B[i];
    }
    
    isPermutation(A,B)?std::cout<<"yes\n":std::cout<<"no\n";
    return 0;
    
    
}
//////////////////////////
#include<iostream>
#include<vector>

void bubbleSort(std::vector<int> &arr){
    bool swapped;
    int n=arr.size();
    for (int i=0;i<n;++i){
        swapped = false;
        for(int j=0;j<n-1;++j){
            if(arr[j]>arr[j+1]){
                swapped = true;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(!swapped){
            break;
        }
    }
}


int main(){
    
    int n;
    std::cin>>n;
    std::vector<int>A(n);
    std::vector<int>B(n);
    for(int i=0;i<n;++i){
        std::cin>>A[i];
    }
    for(int i=0;i<n;++i){
        std::cin>>B[i];
    }
    bubbleSort(A);
    bubbleSort(B);
    bool equal = true;
    for(int i = 0 ; i< n;++i){
        if (A[i]!=B[i]){
            equal = false;
            break;
        }
    }
    equal?std::cout<<"yes\n":std::cout<<"no\n";
    
    
    return 0;
}
