#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string & text){
    std::string reversed(text);
    std::reverse(reversed.begin(),reversed.end());
    if(text==reversed){
        return true;
    }else{
        return false;
    }
} 

int main(){
    std::cout << "Please enter a text message" <<'\n';
    std::string user_text;
    std::cin >> user_text;

    std::cout<<isPalindrome(user_text);
    return 0;
}