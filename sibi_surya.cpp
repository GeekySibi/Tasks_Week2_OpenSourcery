#include <iostream>

bool isPalindrome(int num) {
   
    if (num < 0) return false;
    

    if (num >= 0 && num <= 9) return true;
    
    int original = num;
    long long reversed = 0;  
    
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int number;
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome" << std::endl;
    } else {
        std::cout << number << " is not a palindrome" << std::endl;
    }
    
    return 0;
}