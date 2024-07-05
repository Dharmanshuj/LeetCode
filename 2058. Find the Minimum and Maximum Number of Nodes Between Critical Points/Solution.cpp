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
    vector<int> nodesBetweenCriticalPoints(ListNode* head)
    {
        if(!head || !head->next)
            return {-1,-1};
        vector<int> result;
        int i=1;
        while(head->next->next)
        {
            if(head->val > head->next->val && head->next->val < head->next->next->val)
                result.push_back(i);
            else if(head->val < head->next->val && head->next->val > head->next->next->val)
                result.push_back(i);
            head = head->next;
            i++;
        }
        int n = result.size();
        if(n < 2)
            return {-1,-1};
        int maximum = result[n-1] - result[0];
        int minimum = INT_MAX;
        for(int i=0; i<n-1; i++)
            if(result[i+1] - result[i] < minimum)
                minimum = result[i+1] - result[i];
        return {minimum, maximum};
    }
};
