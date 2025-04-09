#include <bits/stdc++.h>
using namespace std;
string reversePrefix(string &word, char ch) {
    int index = -1;
    for(int i=0;i<word.length();i++){
        if(word[i]==ch) {index = i; break;}
    }
    if(index!=-1){
        for(int i = 0;i<(index+1)/2;i++){
            swap(word[i],word[index-i]);
        }
    }
    return word;
}
int main() {
    string word = "abcdefd";
    char ch = 'd';
    string result = reversePrefix(word, ch);
    cout << result << endl;
    return 0;
}