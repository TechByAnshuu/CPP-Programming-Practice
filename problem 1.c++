// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfitValue = 0;
        int minPrice = prices[0];
        for (int& currentPrice : prices) {
            maxProfitValue = max(maxProfitValue, currentPrice - minPrice);
            minPrice = min(minPrice, currentPrice);
        }
        return maxProfitValue;
    }
};

for(int  i = 1;i,n;++1){
    int  mini(mini,prices[i]);
    maxi = max,proices[i]-mini);
}

// Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i =s.length() -1;
        int len =0;
        // write from the last
        while(i>=0 && s[i] == ' '){
            i--;

        }
        while(i>=0 && s[i] != ' '){
            len++;
            i--;
        }
        return len;

        
    }
};

// Reverse String II - Reverse Words in a String 

class Solution {
public:
    void reverseString(vector<char>& s, int start, int end) {
        while(start < end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    void reverseWords(vector<char>& s) {
        int n = s.size();
        reverseString(s, 0, n - 1); // Reverse the entire string

        int start = 0;
        for(int i = 0; i <= n; i++) {
            if(i == n || s[i] == ' ') {
                reverseString(s, start, i - 1); // Reverse each word
                start = i + 1;
            }
        }
    }

        
};

// Reverse String using Recursion

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s, int start, int end) {
    if (start >= end)
        return;

    swap(s[start], s[end]);
    reverseString(s, start + 1, end - 1);
}

int main() {
    string s;
    getline(cin, s);

    reverseString(s, 0, s.length() - 1);

    cout << s << endl;
    return 0;
}


// Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }    
};


bool validPalindrome(string s){
    int l = 0,r = s.length()-1;
    

}



class Solution(){
    public int ()
}

make unordered set 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<int> us;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        us.insert(x);
    }
    cout<<us.size()<<endl;
    return 0;
    
}

// use map function to count frequency of elements in array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
    while(l<r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}


int main(){
    maps
}


// mapde declar kara mp name assign kiya v[i] banaya
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        v.push_back(x);
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}