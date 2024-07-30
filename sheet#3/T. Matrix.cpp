#include<iostream>
#include<vector>
 
int main(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>>matrix(n,std::vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            std::cin>>matrix[i][j];
        }
    }
    int sumMain = 0;
    int sumSecondary=0;
    for(int i=0;i<n;++i){
        sumMain+=matrix[i][i];
        sumSecondary+=matrix[i][n-1-i];
    }
    int difference = sumMain-sumSecondary;
    int result = abs(difference);
    std::cout<<result<<"\n";
    
    
}
