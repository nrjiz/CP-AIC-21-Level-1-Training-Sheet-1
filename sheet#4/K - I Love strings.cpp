#include<iostream>
#include<string>
#include<cmath>
 
int main(){
    
    int t;
    std::cin>>t;
    while(t--){
        std::string one;
        std::string two;
        std::cin>>one>>two;
        
        std::string third ="";
        int min = std::min(one.length(),two.length());
        int i ;
        for( i = 0; i < min ; ++i){
            third+=one[i];
            third+=two[i];
        }
        while(i<one.length()){
            third+=one[i];
            ++i;
        }
        while(i<two.length()){
            third+=two[i];
            ++i;
        }
        
        std::cout<<third<<"\n";
        
    }
}
