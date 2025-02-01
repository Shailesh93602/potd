//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
    int count = 0;
    int index = 0;
    
    void merge(vector<int> &ans, int left, int mid, int right) {
        int l = mid-left+1;
        int a1[l];
        int l2 = right-mid;
        int a2[l2];
        
        for(int i=0; i<l; i++) a1[i] = ans[i+left];
        
        for(int i=0; i<l2; i++) a2[i] = ans[mid+i+1];
        
        int low = 0;
        int high = 0;
        int k = left;
        
        while(low < l && high < l2) {
            if(a1[low] <= a2[high]) ans[k] = a1[low++];
            else {
                ans[k] = a2[high++];
                count += (l-low);
            }
            k++;
        }
        
        while(low < l) ans[k++] = a1[low++];
        while(high < l2) ans[k++] = a2[high++];
    }
    
    void mergeSort(vector<int> &ans, int left, int right) {
        if(left < right) {
            int mid = (left + right) / 2;
            
            mergeSort(ans, left, mid);
            
            mergeSort(ans, mid+1, right);
            
            merge(ans, left, mid, right);
        }
    }
    
    int inversionCount(vector<int> &ans, int n) {
        mergeSort(ans, 0, n-1);
        
        int res = count;
        count = 0;
        
        return res;
    }
    
    void inOrderStorage(Node *root, vector<int> &ans) {
        if(root == NULL) return;
        
        inOrderStorage(root->left, ans);
        
        ans[index++] = root->data;
        
        inOrderStorage(root->right, ans);
    }

    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        vector<int> ans(n);
        
        inOrderStorage(root, ans);
        
        return inversionCount(ans, n);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends