//favored approach
#include<iostream>
using namespace std;
int main() {
  //note that X (999 < X  ≤  9999)
	int number; // ?,??? / 1000
	cin>>number;
	int res = number / 1000; // 4,569
	if(res % 2 == 0){
		cout<<"EVEN"<<endl;
	} else {
		cout<<"ODD"<<endl;
	}
/////////////////////////////////////////////////////////////////
#include<iostream>

int main(){
    
    std::string str;
    std::cin>>str;
    int c = str.at(0);
    int ch = c -48;
//or// Extract the first character and convert it to an integer
// int firstDigit = number[0] - '0';
    if(ch%2==0){
        std::cout<<"EVEN\n";
    }else{
        std::cout<<"ODD\n";
    }
}

//2:04sec
