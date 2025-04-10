#include<unordered_map>
#include<string>
using namespace std;

int findFirstUniqueChar_HashMap(string s){
    unordered_map<char, int> charMap;

    for(auto& ch : s){
        charMap[ch]++;
    }//store the frequency of the characters in the map

    for(int i = 0; i < s.size(); i++){
        if(charMap[s[i]] == 1) return i;
    }//traverse through string and check if the value in map is 1.

    return -1;
}

int findFirstUniqueChar_Array(string s){
    int freq[26] = {0};

    for(auto& ch : s){
        freq[ch - 'a']++;
    }//- 'a' so that we can have a as 0 and b as 1 etc...

    //find first char with freq 1.
    for(int i = 0; i < s.size(); i++){
        if(freq[s[i] - 'a'] == 1) return i;//
    }
    return -1;
}