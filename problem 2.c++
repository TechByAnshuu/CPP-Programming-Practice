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

mid value is small from x and find the large value froom x in array FROM binary search
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
# left sum or right sum is equal in arry
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int l = 0;
    int r = 5;
    int sum;
    vector <int> v={1,7,3,6,5,6};
    vector <int> ps(v.size());
    
    ps[0] = v[0];

    for(int i = 1; i < v.size(); i++){
        ps[i] = ps[i-1] + v[i];
    }
    use if else condition to find left sum and right sum
    for(int i = 0; i < v.size(); i++){
        int leftSum = (i == 0) ? 0 : ps[i-1];
        int rightSum = ps[v.size() - 1] - ps[i];
        if(leftSum == rightSum){
            cout << "Equilibrium index found at: " << i << endl;
            return 0;
            // you have to print left sum and right sum also
            cout << "Left sum: " << leftSum << ", Right sum: " << rightSum << endl;

        }

    }
    return 0;

}

// do it this in normal if else withiut using conditons
// int leftSum = (i == 0) ? 0 : ps[i-1];
//         int rightSum = ps[v.size() - 1] - ps[i];

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 7, 3, 6, 5, 6};
    vector<int> ps(v.size());

    ps[0] = v[0];
    for(int i = 1; i < v.size(); i++) {
        ps[i] = ps[i - 1] + v[i];
    }

    for(int i = 0; i < v.size(); i++) {
        int leftSum;
        if(i == 0) {
            leftSum = 0;
        } else {
            leftSum = ps[i - 1];
        }

        int rightSum = ps[v.size() - 1] - ps[i];

        if(leftSum == rightSum) {
            cout << "Equilibrium index found at: " << i << endl;
            cout << "Left sum: " << leftSum << ", Right sum: " << rightSum << endl;
            return 0;
        }
    }

    cout << "No equilibrium index found." << endl;
    return 0;
}

two sum pointers approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    int left = 0;
    int right = v.size() - 1;

    while(left < right) {
        int currentSum = v[left] + v[right];
        if(currentSum == target) {
            cout << "Indices: " << left << ", " << right << endl;
            return 0;
        } else if(currentSum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "No two sum solution found." << endl;
    return 0;
}

using a two sum with the unsorted  array  homework
using two pinters two replac element with the help of swapping in a array like [1,2,4,6,8,9] to [9,8,6,4,2,1]


using recursion to find factorial of a number
#include <iostream>
using namespace std;
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}

// using iteration to find factorial of a number
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}

using recursion to find power of a number
#include <iostream>
using namespace std;
int power(int base, int exp) {
    if(exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main() {
    int base, exp;
    cin >> base >> exp;
    cout << base << " raised to the power " << exp << " is " << power(base, exp) << endl;
    return 0;
}

using recurrsion to find fibonacci series find 10 elements and print 10 elements
#include <iostream>
using namepace std;
int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for(int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}


class solution{
    public int fib(int x){
        if(x==0||x==1){
            return x;

        }
        int f1 = fib(x-1);
        int f3 = fib(x-2);
        return f1+f3;
    }
    int main(){
        int n;
        cin >> n;
        solution s;
        for(int i=0;i <=n;i++){
            return fib(i) << " ";
            
        }
    }
    cout <<endl;
    return 0;
}


// STRING DESCIPTION:-

// USE GETLINE TO TAKE INPUT WITH user
#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    for(int i = 0;i<)

    cout << a[4] << endl;
    
    return 0;
	

}


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> v[n];
    for(int i = 0; i< n; i++){
        cin >> v[i];
        
    }
    map<char,int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        cout << it.first << " " << it.second << endl;
    }
    

}


// write a Program for insertion of a node at a linked list at a usser - defined position using class function

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
    void insertAtPosition(int pos , Node* head){
        Node* newNode = new Node(d);
        if(pos == 1){
            newNode->next = head;
            head = newNode;
        }else{
            Node* temp = head;
            for(int i = 1; i < pos - 1; i++){
                temp = temp->next;

            }
            newNode->next = temp->next;
            temp->next = newNode;

        }    
    }

}


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int d) {
        data = d;
        next = NULL;
    }

    // insert at user-defined position
    static void insertAtPosition(Node* &head, int pos, int d) {
        Node* newNode = new Node(d);

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // print list
    static void print(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Node* head = NULL;

    Node::insertAtPosition(head, 1, 10);
    Node::insertAtPosition(head, 2, 20);
    Node::insertAtPosition(head, 2, 15);

    Node::print(head);

    return 0;
}

// write a Program for insertion of a node at a linked list at a usser - defined position using class function

#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
    void insertAtPosition(Node* &head,int val, int pos){
        Node* newNode = new Node(val);
        if(pos == 1){
            newNode->next = head;
            head = newNode;
        }else{
            Node* temp = head;
            for(int i = 1; i < pos - 1 && temp != NULL; i++){
                temp = temp->next;
            }if(temp!=NULL){
                newNode->next = temp->next;
                temp->next = newNode;
            }else{
                cout << "Invalid Position" << endl;
            }
        }
    }
};
int main(){
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        Node* newNode = new Node(num);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    int pos;
    cin >> pos;
    int val;
    cin >> val;
    head->insertAtPosition(head, val, pos);
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data;
        if(temp->next!=NULL){
            cout << "->";
        }
        temp = temp->next;
    }
    cout << endl;
    return 0;
}
