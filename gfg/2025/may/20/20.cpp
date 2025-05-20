//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
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
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

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

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
    int findDepth(Node* root) {
        if(!root) return 0;
        
        int left = findDepth(root->left);
        int right = findDepth(root->right);
        
        return max(left, right) + 1;
    }
    int solve(Node* root, int target, int &ans) {
        if(!root) return -1;
        
        if(root->data == target) {
            int depth = findDepth(root) - 1;
            ans = max(ans, depth);
            return 1;
        }
        
        int left = solve(root->left, target, ans);
        if(left != -1) {
            int depth = findDepth(root->right);
            ans = max(ans, left + depth);
            return left + 1;
        }
        
        int right = solve(root->right, target, ans);
        if(right != -1) {
            int depth = findDepth(root->left);
            ans = max(ans, right + depth);
            return right + 1;
        }
        
        return -1;
    }
  public:
    int minTime(Node* root, int target) {
        // code here
        int ans = 0;
        
        solve(root, target, ans);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin >> target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout << obj.minTime(root, target) << "\n";

        cin.ignore();

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
