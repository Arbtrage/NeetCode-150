// https://leetcode.com/problems/reverse-nodes-in-k-group/solutions/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        deque<ListNode*> q;
        auto a=new ListNode();
        auto r=a;
        int i=0;
        while(head){
            q.push_back(head);
            head=head->next;
            q.back()->next=NULL;
            i++;
            if(i==k){
                while(i>0){
                    a->next=q.back();
                    q.pop_back();
                    a=a->next;
                    i--;
                }
            }
        }

        while(!q.empty()){
            a->next=q.front();
            a=a->next;
            q.pop_front();
        }

        return r->next;
    }
};