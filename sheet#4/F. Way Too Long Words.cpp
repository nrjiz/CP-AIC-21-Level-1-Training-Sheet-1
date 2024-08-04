#include<iostream>
 
int main(){
    int test_cases;
    std::cin>>test_cases;
    while(test_cases--){
        std::string input;
        std::cin>>input;
        if(input.size()>10){
            std::string newFormat;
            newFormat+=input[0];
            int count =0;
            for(int i=1;i<input.size()-1;++i){
                count++;
            }
            newFormat+= std::to_string(count);
            newFormat+=input[input.size()-1];
            input=newFormat;
        }
        std::cout<<input<<'\n';
    }
}
// second way that is shorter but learned by chatGPT:
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after the number of test cases

    while (T--) {
        string S;
        getline(cin, S); // Read the string
        
        if (S.length() > 10) {
            cout << S[0] << S.length() - 2 << S.back() << endl;
        } else {
            cout << S << endl;
        }
    }
    
    return 0;
}
