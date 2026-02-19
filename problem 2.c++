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


// sorting Algorithm

#include <bits/stdc++.h>
using namespace std;
vector<int> newArray(vector<int> arr){
    int arrSize = arr.size();
    for(int i = 0; i<arrSize ; i++){
        for(int j = 0; j < arrSize - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return arr;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int)
}

// make one class and insert  from left or right


class Node {
    int data;
    Node left, right;

    Node(int val) {
        data = val;
        left = null;
        right = null;
    }
}

class BinaryTree {
    Node root;

    BinaryTree() {
        root = null;
    }

    // insert left child
    void insertLeft(Node parent, int val) {
        if (parent == null) return;
        parent.left = new Node(val);
    }

    // insert right child
    void insertRight(Node parent, int val) {
        if (parent == null) return;
        parent.right = new Node(val);
    }

    void display(Node node) {
        if (node == null) return;
        System.out.print(node.data + " ");
        display(node.left);
        display(node.right);
    }

    public static void main(String[] args) {
        BinaryTree bt = new BinaryTree();

        bt.root = new Node(10);
        bt.insertLeft(bt.root, 5);
        bt.insertRight(bt.root, 20);

        bt.insertLeft(bt.root.left, 3);
        bt.insertRight(bt.root.left, 7);

        bt.display(bt.root);
    }
}

// use stack for putting value and then traverse and put into vector



// 94. Binary Tree Inorder Traversal

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& res){

        if(!root) return;

        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);

        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> store;
        inorder(root, store);
        return store;
    }
};


// Depth first Search Template for tree which used in all 4 types which uses in all the code

#include <bits/stdc++.h>
using namespace std;

iny N = 1e5 +10;
void dfs(int vertex);
int depth[N];
int height[N];
// we have to calculate height and depth;

void dfs(int vertex, int par = 0){
   // take the action on the vertex after entering the vertex
    for(int  : T){
         // take action on the child before entering the child
        if(child == par) continue;// if the node that we are visiting is already considered theen we should skip that case.
        depth[child] = depth[vertex]+1;

        dfs(child, vertex); 
    // take action on the child after exiting the child 
    
    }
    // take action on the vertex after exiting the child
    
}

int main() {
    
    int n;
    cin >>n:
    vector<vector<int>> tree(n);
    for(int i= 0; i<n-1;i++){
        cin>>x>>y;
        tree[x].push_back[y];
        tree[y].push_back[x];
        
    }
	// your code goes here

}
// input
// 7
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 3 7
// This means:

//         1
//       /   \
//      2     3
//     / \   / \
//    4  5  6  7
// Expected output
// Node 1 Depth = 0 Height = 2
// Node 2 Depth = 1 Height = 1
// Node 3 Depth = 1 Height = 1
// Node 4 Depth = 2 Height = 0
// Node 5 Depth = 2 Height = 0
// Node 6 Depth = 2 Height = 0
// Node 7 Depth = 2 Height = 0


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
int depth[N];
int height[N];

// DFS to calculate depth and height
void dfs(int vertex, int par = 0) {

    // explore children
    for (int child : tree[vertex]) {
        if (child == par) continue;

        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);

        // after returning from child → update height
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;

        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    dfs(1); // assuming 1 is root

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i
             << " Depth = " << depth[i]
             << " Height = " << height[i] << endl;
    }

    return 0;
}

// Subtree sum

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
int depth[N];
int height[N];
int subtreeSum[N];
int evenCount[N];
int value[N];
int maxDepth = 0;

void dfs(int vertex, int par = 0) {

    subtreeSum[vertex] = value[vertex];

    // check even
    evenCount[vertex] = (value[vertex] % 2 == 0);

    for (int child : tree[vertex]) {
        if (child == par) continue;

        depth[child] = depth[vertex] + 1;
        maxDepth = max(maxDepth, depth[child]);

        dfs(child, vertex);

        height[vertex] = max(height[vertex], height[child] + 1);

        subtreeSum[vertex] += subtreeSum[child];
        evenCount[vertex] += evenCount[child];
    }
}

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> value[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    dfs(1);

    cout << "Maximum depth from root = " << maxDepth << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i
             << " subtree sum = " << subtreeSum[i]
             << ", even count = " << evenCount[i]
             << endl;
    }

    return 0;
}

// DFS recursive code

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
int depth[N];
int height[N];
int subtreeSum[N];
int evenCount[N];
int value[N];
int maxDepth = 0;

void dfs(int vertex, int parent = 0) {

    // take action on entering node
    subtreeSum[vertex] = value[vertex];
    evenCount[vertex] = (value[vertex] % 2 == 0);

    for (int child : tree[vertex]) {
        if (child == parent) continue;

        depth[child] = depth[vertex] + 1;
        maxDepth = max(maxDepth, depth[child]);

        dfs(child, vertex);  // ✅ recursive call

        // take action after returning from child
        height[vertex] = max(height[vertex], height[child] + 1);
        subtreeSum[vertex] += subtreeSum[child];
        evenCount[vertex] += evenCount[child];
    }
}

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> value[i];

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    dfs(1);   // root = 1

    cout << "Max depth = " << maxDepth << "\n\n";

    for (int i = 1; i <= n; i++) {
        cout << "Node " << i
             << " | Subtree Sum = " << subtreeSum[i]
             << " | Even Count = " << evenCount[i]
             << " | Height = " << height[i]
             << " | Depth = " << depth[i]
             << endl;
    }

    return 0;
}


// DFS Recursive Code
#include <bits/stdc++.h>
using namespace std;

// maximum number of nodes
const int N = 1e5 + 10;

// adjacency list to store tree
vector<int> tree[N];

// arrays to store properties of nodes
int depth[N];        // distance from root
int height[N];       // height of subtree
int subtreeSum[N];   // sum of values in subtree
int evenCount[N];    // count of even numbers in subtree
int value[N];        // value of each node
int parent[N];       // parent of each node

int maxDepth = 0;    // global maximum depth

//--------------------------------------------------
// DFS function (recursive)
// vertex = current node
// par = parent of current node
//--------------------------------------------------
void dfs(int vertex, int par = 0) {

    // store parent of current node
    parent[vertex] = par;

    // when entering node:
    // start subtree sum with its own value
    subtreeSum[vertex] = value[vertex];

    // if value is even → count = 1 else 0
    evenCount[vertex] = (value[vertex] % 2 == 0);

    // visit all children of vertex
    for (int child : tree[vertex]) {

        // avoid going back to parent
        if (child == par) continue;

        // set depth of child
        depth[child] = depth[vertex] + 1;

        // update maximum depth
        maxDepth = max(maxDepth, depth[child]);

        // recursive call
        dfs(child, vertex);

        // after returning from child:

        // update height of current node
        height[vertex] = max(height[vertex], height[child] + 1);

        // add child subtree values
        subtreeSum[vertex] += subtreeSum[child];

        // add child even count
        evenCount[vertex] += evenCount[child];
    }
}

//--------------------------------------------------
// MAIN FUNCTION
//--------------------------------------------------
int main() {

    int n;
    cin >> n;  // number of nodes

    // input node values
    for (int i = 1; i <= n; i++)
        cin >> value[i];

    // input edges (tree has n-1 edges)
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;

        // undirected edge
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    // start DFS from root = 1
    dfs(1, 0);

    cout << "Max depth = " << maxDepth << "\n\n";

    // print results for each node
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i
             << " | Subtree Sum = " << subtreeSum[i]
             << " | Even Count = " << evenCount[i]
             << " | Height = " << height[i]
             << " | Depth = " << depth[i]
             << " | parent = " << parent[i]
             << endl;
    }

    return 0;
}



// input 
// 7
// 5 2 8 1 6 3 4
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 3 7



// Max depth = 2

// Node 1 | Subtree Sum = 29 | Even Count = 4 | Height = 2 | Depth = 0 | parent = 0
// Node 2 | Subtree Sum = 9  | Even Count = 2 | Height = 1 | Depth = 1 | parent = 1
// Node 3 | Subtree Sum = 15 | Even Count = 2 | Height = 1 | Depth = 1 | parent = 1
// Node 4 | Subtree Sum = 1  | Even Count = 0 | Height = 0 | Depth = 2 | parent = 2
// Node 5 | Subtree Sum = 6  | Even Count = 1 | Height = 0 | Depth = 2 | parent = 2
// Node 6 | Subtree Sum = 3  | Even Count = 0 | Height = 0 | Depth = 2 | parent = 3
// Node 7 | Subtree Sum = 4  | Even Count = 1 | Height = 0 | Depth = 2 | parent = 3