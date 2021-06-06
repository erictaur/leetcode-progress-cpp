class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "#";
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deser_from_stream(ss);
    }
    
    TreeNode* deser_from_stream(stringstream& ss){
        string str;
        getline(ss, str, ',');
        
        if(str == "#"){
            return nullptr;
        }
        else{
            TreeNode* node = new TreeNode(stoi(str));
            node->left = deser_from_stream(ss);
            node->right = deser_from_stream(ss);
            
            return node;
        }
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));

/* 101. Symmetric-Tree.cpp
//////////////////////////////////////////////////
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, 
or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize a binary tree. 
There is no restriction on how your serialization/deserialization algorithm should work. 
You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

Clarification: The input/output format is the same as how LeetCode serializes a binary tree. 
You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

Input: root = [1,2,3,null,null,4,5]
Output: [1,2,3,null,null,4,5]

https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
//////////////////////////////////////////////////
*/
