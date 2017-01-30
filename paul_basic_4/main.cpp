#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
// Available for ONLY 3 characters
int main() {
    string str = "cat";
    //cout << "Keying the word: " << endl;
    //cin >> str;
    
    for (unsigned int i = 0; i <= str.length()-1; i++){
        for (unsigned int j = 0; j <= str.length()-1; j++ ) {
            for (unsigned int k = 0; k <= str.length()-1; k++) {
                if( j != i && k != i && j != k) {
                    string x = ( str.substr(j,1) );
                    string y = ( str.substr(k,1) );
                    swap(x,y);
                    cout << str.substr(i,1) << y << x << endl;
                }
            }
        }
        
    }
    return 0;
}
