//first way using ascii values
#include<iostream>
#include<string>
 
int main(){
    std::string phrase;
    std::getline(std::cin,phrase);
    for(int i=0;i<phrase.size();++i){
        if(phrase[i]>=65&&phrase[i]<=90){
            phrase[i]=phrase[i]+32;
        }else if(phrase[i]>=97){
            phrase[i]-=32;
        }else if(phrase[i]==','){
            phrase[i]=' ';
        }
    }
    std::cout<<phrase<<'\n';
    
}
//second important way using for each and built in functions:
#include<iostream>
#include<string>

int main(){
    std::string phrase;
    std::getline(std::cin,phrase);

    for (char &c: phrase){
        if(c ==',')c=' ';
        else if(isupper(c))c=tolower(c);
        else if(islower(c))c=toupper(c);
    }
    std::cout<<phrase<<'\n';
    
}
