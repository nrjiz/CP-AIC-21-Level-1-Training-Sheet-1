#include<iostream>
#include<limits>
 
int main(){
    
    int n;
    std::cin>>n;
    int min=std::numeric_limits<int>::max();
    int counter=0;
    for(int i=0;i<n;++i){
        int input;
        std::cin>>input;
        if(input<min){
            min=input;
            counter=1;
        }else if(input==min){
            counter++;
        }
    }
    counter%2==0?printf("Unlucky\n"):printf("Lucky\n");
}
