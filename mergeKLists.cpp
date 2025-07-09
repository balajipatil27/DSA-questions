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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        
        for(auto list : lists){
            ListNode* temp = list;
            while(temp){
                nums.push_back(temp->val);
                temp=temp->next;
        }
        }
        if(nums.empty()) return nullptr;
        sort(nums.begin(),nums.end());

        ListNode* ans = new ListNode(nums[0]);
        ListNode* curr = ans;
        for(int i=1;i<nums.size();i++){
            curr->next = new ListNode(nums[i]);
            curr= curr->next;
        }
        return ans;
    }

};
