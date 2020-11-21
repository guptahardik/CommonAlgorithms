/** Solution to check if a string is palindrome C++
Time Complexity: O(n/2)
**/

bool checkPalindrome(string inputString) {
    int y = inputString.length()-1;
    for(int z = 0; z<inputString.size()/2; z++){
        if(inputString[z] != inputString[y]){
            return false;
        }
        y--;
    }
    return true;
}
