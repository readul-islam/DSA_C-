#include<iostream>
using namespace std;
void printArray(const char arr[]) {
//    someting
    for (char c : arr) {
        std::cout << c;
    }
    std::cout << std::endl; // To ensure the output ends with a newline
}
// start char 
int main(){

    char d = 'p';
    cout << d << endl;
    return 0;
}