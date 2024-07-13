#include <cstdio>
int main(){
    double input;
    scanf("%lf",&input);
    int testingInput = input;
    double something = input-testingInput;
    if(something>0){
        printf("float %d %lf",testingInput,something);
    }else{
        printf("int %d",testingInput);
    }
}


//

#include <iostream>
 
int main(){
    double Float;
    std::cin>>Float;
    int Int = Float;
    double result = Float - Int;
    if(result>0){
        std::cout<<"float "<<Int<<" "<<result<<"\n";
    }else{
        std::cout<<"int "<<Int<<"\n";
    }
}
