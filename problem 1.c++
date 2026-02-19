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

for(int  i = 1;i<n;++1){
    int  mini(mini,prices[i]);
    maxi = max,prices[i]-mini);
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

// Left Roteation array
#include <bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>& arr, int d){
    int n = arr.size();
    // using for loop and under the modulo operator
    for(int i= 0;i<n;i++){
        arr[i] = arr[(i - d + n) % n];
    }
    int main(){
        vector<int> arr = {1,2,3,4,5};
        int d = 3;
        leftRotate= (arr,d);
        for(int i = 0;i<arr.size();i++){
            cout<<arr[i]<<" ";

        } 
        return 0;
    }
}


int<bits/stdc++.h>
using namespace std;
public:
    int firstUniqChar(String s){
        map<char,int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i = 0;i<s.length();i++){
            if(mp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }


    // Find First and Last Position of Element in Sorted Array
//     Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109
// nums is a non-decreasing array.
// -109 <= target <= 109

    class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                if(first == -1) {
                    first = i;
                }
                last = i;
            }
            
        }
        return {first, last};


        
    }

};

// solved with binary search
class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;      // possible answer
                high = mid - 1; // left side search
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;      // possible answer
                low = mid + 1;  // right side search
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};


// 5. Longest Palindromic Substring

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string longestPalindrome(string s){
        int n = s.length();
        if(n == 0) return "";
        int start = 0, maxLength = 1;

        for(int i = 0;i<n;i++){
            // Odd length palindromes
            int low = i - 1;
            int high = i + 1;
            while(low >= 0 && high < n && s[low] == s[high]){
                if(high - low + 1 > maxLength){
                    start = low;
                    maxLength = high - low + 1;
                }
                low--;
                high++;
            }

            // Even length palindromes
            low = i;
            high = i + 1;
            while(low >= 0 && high < n && s[low] == s[high]){
                if(high - low + 1 > maxLength){
                    start = low;
                    maxLength = high - low + 1;
                }
                low--;
                high++;
            }
        }
        return s.substr(start, maxLength);
    }
    
}

// subarray sum equal to k

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; // To handle the case when the subarray starts from index 0
        int currentSum = 0;
        int count = 0;

        for (int num : nums) {
            currentSum += num;

            if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[currentSum - k];
            }

            prefixSumCount[currentSum]++;
        }

        return count;
    }
};


// 11. Container With Most Water

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxAreaValue = 0;

        while (left < right) {
            int currentHeight = min(height[left], height[right]);
            int currentWidth = right - left;
            int currentArea = currentHeight * currentWidth;
            maxAreaValue = max(maxAreaValue, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxAreaValue;
    }
};

// trapping rain water
#include <bits/stdc++.h>
using namespace std;

public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int lMax = 0, rMax = 0;
        int water = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                if (lMax <= height[l]) {
                    lMax = height[l];
                } else {
                    water += lMax - height[l];
                }
                l++;
            } else {
                if (height[r] >= rMax) {
                    rMax = height[r];
                } else {
                    water += rMax - height[r];
                }
                r--;
            }
        }

        return water;
    }
}

// 876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow  = head;
        ListNode* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow-> next;
        }
        return slow;
    }
};



public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;


            if(slow == fast){
                slow = head;

                while (slow != fast){
                    slow = slow.next;
                    fast = fast.next;
                }
                return slow;
            }

        }
        return null;
        
    }
}


// bubble sort or Selection sort

// 905. Sort Array By Parity

// 922. Sort Array By Parity II

// 464. Maximum Product of Two Elements in an Array

// 215. Kth Largest Element in an Array

