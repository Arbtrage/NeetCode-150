//https://leetcode.com/problems/merge-two-sorted-lists/

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    
    ListNode* merge(ListNode* first,ListNode* second)
    {
        if(!first) return second;
        if(!second) return first;

        if(first->val>second->val){
            second->next=merge(first,second->next);
            return second;
        }
        else{
            first->next=merge(first->next,second);
            return first;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return merge(list1,list2);
    }
};