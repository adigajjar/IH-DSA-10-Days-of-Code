#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;


        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
       
        for(int i = 0; i<s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }


        for(int i = 0; i<smap.size(); i++){
            if(smap[i] != tmap[i]){
                return false;
            }
        }
        return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    bool result = isAnagram(s, t);

    if (result) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
