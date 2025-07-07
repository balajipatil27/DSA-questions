/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp){
            ans.push_back(temp->val);
            temp =temp->next;
        }
        for(int i =0;i+k<=ans.size();i += k){
            reverse(ans.begin()+i,ans.begin()+i+k);
        }

   
        ListNode* newlist = new ListNode(ans[0]);
        ListNode* curr = newlist;
        for(int i =1;i<ans.size();i++){
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }
        return newlist;
    }
};
