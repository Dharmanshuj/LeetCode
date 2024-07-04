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
    ListNode* mergeNodes(ListNode* head)
    {
        if(!head || !head->next)
            return NULL;
        vector<int> result;
        int sum = 0;
        while(head)
        {
            if(head->val == 0)
            {
                if(sum)
                    result.push_back(sum);
                sum = 0;
            }
            else
                sum += head->val;
            head = head->next;
        }
        ListNode* r = new ListNode(0);
        head = r;
        for(auto i : result)
        {
            r->next = new ListNode(i);
            r = r->next;
        }
        head = head->next;
        return head;
    }
};
