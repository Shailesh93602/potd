/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root) return {};
        vector<Node*> stack={root};
        deque<int> q;
        while(!stack.empty()){
            auto curr=stack.back();
            stack.pop_back();
            q.push_front(curr->val);
            for(auto& child: curr->children)
                if (child) stack.push_back(child);
        }
        return vector<int>(q.begin(), q.end());
    }
};
