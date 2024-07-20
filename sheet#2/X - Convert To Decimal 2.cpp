#include<iostream>
int getNumberOfOnes(int input){
    int nbOfOnes=0;
    while(input!=0){
        nbOfOnes+=input&1;
        input>>=1;
    }
    return nbOfOnes;
}
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int input;
        std::cin>>input;
        int numberOfOnes=getNumberOfOnes(input);
        int result=(1<<numberOfOnes)-1;
        std::cout<<result<<"\n";
    }
}
