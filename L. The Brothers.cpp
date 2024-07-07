//first way using a c-string and iostream
#include <iostream>
#include <cstring>

int main(){
    char a[100],b[100],c[100],d[100];
    std::cin>>a>>b>>c>>d;
    (strcmp(b,d)==0)?std::cout<<"ARE Brothers\n":std::cout<<"NOT\n";
    return 0;    
}
//using a string object and iostream
#include<iostream>
int main(){
    std::string a,b,c,d;
    std::cin>>a>>b>>c>>d;
    (b==d)?std::cout<<"ARE Brothers\n":std::cout<<"NOT\n";
    return 0;
}
//using cstring and cstdio
#include <cstring>
#include <cstdio>
int main(){
    char a[100],b[100],c[100],d[100];
    scanf("%s %s %s %s",a,b,c,d);
    (strcmp(b,d)==0)?printf("ARE Brothers\n"):printf("NOT\n");
    return 0;
}
