#include <cstdio>

int main(){
    char str[100];
  // to  allow it to absorb a line of text
    scanf("%99[^\n]",str);
    printf("%s",str);
    return 0;
}
//2 minutes

int main(){
  //here it would absorb only one word
    char str[100];
    scanf("%99s",str);
    printf("Hello, %s",str);
    return 0;
}

int main(){
    char* str = new char[100];
    //here it would absorb only one word, (it stops at first space)
    scanf("%99s",str);
    printf("Hello, %s",str);
}


#include <iostream>

int main(){
    std::string str;
    //input a line of words into str(it stops reading at \n)
    std::getline(std::cin,str);
    std::cout<<"Hello, "<<str;
}

int main(){
    std::string str;
    std::cin>>str;
    std::cout<<"Hello, "<<str;
}



