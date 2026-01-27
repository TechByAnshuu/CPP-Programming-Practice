// print variable value

// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> v(5);
//     for(int i = 0;i < v.size();i++){
//         int a;
//         cin >> a;
//         v.push_back(a);
        
//     }
//     for(int i= 0;i<4;i++){
//     cout << v[i]<<" ";
    
//     }
//     return 0;
// }



// print the value of Sum  of 5 numbers  

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     for(int i = 0; i < 5; i++){
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }

    
//     }
//     cout<<sum;
//     return 0;
// }


// Find the maximum value in an array




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 25, 5, 40, 30};
//     int n = 5;

//     int maxVal = arr[0];   

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxVal) {
//             maxVal = arr[i];
//         }
//     }

//     cout << "Maximum = " << maxVal;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    for(int i = 0; i < 5; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int maxVal = v[0];  

    for(int i = 1; i < v.size(); i++){
        if(v[i] > maxVal){
            maxVal = v[i];
        }
    }

    cout << maxVal;
    return 0;
}


// find the second largest number in an array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {10, 25, 5, 40, 30};
//     int n = 5;
//     int firstMax = INT_MIN;
//     int secondMax = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] > firstMax) {
//             secondMax = firstMax;
//             firstMax = arr[i];
//         } else if(arr[i] > secondMax && arr[i] != firstMax) {
//             secondMax = arr[i];
//         }
//     }
//     if(secondMax == INT_MIN) {
//         cout << "No second largest element";
//     } else {
//         cout << "Second Largest = " << secondMax;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> v;
//     for(int i = 0; i < 5; i++){
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     int firstMax = INT_MIN;
//     int secondMax = INT_MIN;
//     for(int i = 0; i < v.size(); i++) {
//         if(v[i] > firstMax) {
//             secondMax = firstMax;
    //             firstMax = v[i];
    //         } else if(v[i] > secondMax && v[i] != firstMax) {
    //             secondMax = v[i];
    //         }
    //     }
    //     if(secondMax == INT_MIN) {
    //         cout << "No second largest element";
    //     } else {
    //         cout << "Second Largest = " << secondMax;
    //     }
    //     return 0;
    // }
    


// Plaindrome Number

#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0;
    cin >> n;

    temp = n;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

    // Find prime numbers up to n
#include <iostream>
#include <vector>
using namespace std;
int n;
int i;
cin >> n;
int main(){
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }



        }
    }

}
    for(int i = 2; i <= n; i++) {
        if(isPrime[i]) {
            cout << i << " ";
        }
    }
    return 0;
}

// Greatest Common Divisor (GCD) and Least Common Multiple (LCM)
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << "GCD: " << gcd(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;

    return 0;
}


int n1, n2;
cin>> n1 ,n2;
int gcd = 1;
for(int i = 1; i <= min(n1, n2); i++) {
    if(n1 % i == 0 && n2 % i == 0) {
        gcd = i;
    }
}

// x is an element is present in the vector or not
#include <iostream>
#include <vector>
using namespace std;
int main()[
    vector<int> v={10,20,30,40,50};
    int x;
    cin >> x;
    bool found = false; 
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == x) {
            found = true;
            break;
        }
    }
    if(found) {
        cout << x << " is present in the vector." << endl;
    } else {
        cout << x << " is not present in the vector." << endl;
    }
    return 0;
]

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    bool, isPresent = false;
    vector<int> v={10,20,30,40,50} ;
    for(int i = 0;i<v.size();i++){
        if(x <=v[i]){
            isPresent = true;
        }
    }
    cout <<boolalpha;
    cout << "Element is Present" << isPresent << endl;
    return 0;


}

binary search in a sorted array for prime numbers
#include <iostream>
#include <vector>
using namspace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    int left = 0, right = n - 1;
    bool found = false;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(v[mid] == x){
            found = true;
            break;
        } else if(v[mid] < x){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if(found){
        cout << x << " is present in the array." << endl;
    } else {
        cout << x << " is not present in the array." << endl;
    }
    return 0;
}    

how many times in veector elemets present 

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // first we have to declare a vector 
    vector<int> v = {2,14,5,3,7,14,9,14,11};
    int x;
    cin >> x;
    // now we will count how many times x is present in the vector
    int count = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == x) {
            count++;
        }
    }
    cout << x << " is present " << count << " times" << endl;
    return 0;
}

find the mid in array but find bigger ofvalue in arry mid
#include <iostream>
#include <vector>  
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int n = v.size();
    int mid = n / 2;
    int biggerValue;
    if(n % 2 == 0) {
        biggerValue = max(v[mid - 1], v[mid]);
    } else {
        biggerValue = v[mid];
    }
    cout << "Bigger value at mid: " << biggerValue << endl;
    return 0;
}

another way to find mid value in array
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int n = v.size();
    int midIndex = (n - 1) / 2; // For both even and odd sizes
    cout << "Mid value: " << v[midIndex] << endl;
    return 0;
}

mide value is small from x and find the large value froom x in array FROM binary search
#include <iostream>
#include <vector>   
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int x;
    cin >> x;

    int left = 0, right = v.size() - 1;
    int smallerValue = -1; // To store the largest value smaller than x
    int largerValue = -1;  // To store the smallest value larger than x

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(v[mid] < x) {
            smallerValue = v[mid];
            left = mid + 1;
        } else if(v[mid] > x) {
            largerValue = v[mid];
            right = mid - 1;
        } else {
            // If x is found, we can break
            smallerValue = v[mid];
            largerValue = v[mid];4
            break;
        }
    }

    if(smallerValue != -1) {
        cout << "Largest value smaller than " << x << " is: " << smallerValue << endl;
    } else {
        cout << "No value smaller than " << x << " found." << endl;
    }

    if(largerValue != -1) {
        cout << "Smallest value larger than " << x << " is: " << largerValue << endl;
    } else {
        cout << "No value larger than " << x << " found." << endl;
    }

    return 0;
}

// Count odd or even number from given array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    int oddCount = 0;
    int evenCount = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i] % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    cout << "Odd Count: " << oddCount << endl;
    cout << "Even Count: " << evenCount << endl;
    return 0;
}


// usingfromula high -low /2 to find mid value in array


#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2; // Using the formula to find mid
    cout << "Mid value: " << v[mid] << endl;
    return 0;
}

// using binary search to find mid value in array using while loop with formula high -low /2 and find bigger element from mid value.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v= {10,20,30,40,50,60,70};
    int n = v.size();
    int low  = 0;
    int high = n - 1;
    int biggerValue;
    while(low <= high){
        int mid = low + (high - low) / 2;
        biggerValue = v[mid];
        break;
    }
    cout << "Bigger value at mid: " << biggerValue << endl;
    return 0;

}

// add an element in array using  at specific position
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int element, position;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position to insert (0 to " << v.size() << "): ";
    cin >> position;

    if(position < 0 || position > v.size()) {
        cout << "Invalid position!" << endl;
    } else {
        v.insert(v.begin() + position, element);
        cout << "Array after insertion: ";
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// add an element in array using  at specific position using binary search which i am given in input section.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    int element, position;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position to insert (0 to " << v.size() << "): ";
    cin >> position;

    if(position < 0 || position > v.size()) {
        cout << "Invalid position!" << endl;
    } else {
        v.insert(v.begin() + position, element);
        cout << "Array after insertion: ";
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// using prefix sum formula to find sum in array


#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> prefixSum(v.size());
    
    prefixSum[0] = v[0];
    for(int i = 1; i < v.size(); i++) {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    cout << "Prefix Sum Array: ";
    for(int i = 0; i < prefixSum.size(); i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    return 0;
}


// prefix sum in array hhaving l = 2 ,R= 5 to find sum between l to r index
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int l = 2;
    int r = 4;
    int sum;
    vector <int> v={2,3,4,5,6};
    vector<int> ps(v.size());
    ps[0] = v[0];
    for(int i = 1; i < v.size(); i++){
        ps[i] = ps[i-1] + v[i];
    }

    if(l == 0){
        sum = ps[r];
    }else{
        sum = ps[r] - ps[l-1];
    }   
    cout << "Sum from index " << l << " to " << r << " is: " << sum << endl;
    return 0;  
}