// https://leetcode.com/problems/copy-list-with-random-pointer/description/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        unordered_map<Node*, Node*> mp;
        Node *temp,*newHead;

        temp=head;
        newHead=new Node(temp->val);
        mp[temp]=newHead;

        while(temp->next){
            newHead->next=new Node(temp->next->val);
            temp=temp->next;
            newHead=newHead->next;
            mp[temp]=newHead;
        }

        temp=head;

        while(temp){
            mp[temp]->random=mp[temp->random];
            temp=temp->next;
        }

        return mp[head];

    }
};