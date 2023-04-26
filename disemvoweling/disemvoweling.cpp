// This is a program to disemvowel sentences
// Juha Rainto

// Wikipedia defines disemvoweling as
// "a piece of alphabetic text is rewritten with all the vowel letters elided."
// "It is often used in band and company names"
// e.g. tumblr, flickr

#include <iostream>

bool isVowel(char letter);
std::string disemvowel(std::string input);

/**
 * @brief Check if character is in the array
 * 
 * @param letter to be checked
 * @return true if char matches array
 * @return false if no match s found
 */
bool isVowel(char letter){
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for(int i = 0; i < sizeof(vowels); i++){
        if(letter == vowels[i]){
            return true;
        }
    }
    return false;
}

/**
 * @brief Go through a string. Add characters to a new string
 * if they are not vowels
 * 
 * @param input string to be disemvoweled
 * @return output disemvoweled string
 */
std::string disemvowel(std::string input){
    int n = input.length();
    std::string output = "";

    for (int i = 0; i < n; i++){
        if (!isVowel(input[i])){
            output += input[i];
        }
    }
    return output;
}

/**
 * @brief Take in string from user. Call disemvowel function.
 * 
 * @return int 0
 */
int main(){
    std::cout << "Give text" << std::endl;
    std::string str;
    std::getline(std::cin, str);

    std::cout << disemvowel(str) << std::endl;

    return 0;
}
