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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp = head;
        int count = 0;
        
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        int k = count+1-n;
        
        ListNode*curr = head;
        ListNode*prev = NULL;
        int cnt = 1;
        
        if(count==1){
            return NULL;
        }
        if(k==1){
        ListNode*temp = head;
        head = head->next;
        temp->next = NULL;
            return head;
    }
        while(cnt!=k){
              prev = curr;
            curr = curr->next;
        cnt++;
        }
        prev->next = curr->next;
       curr->next = NULL;
        return head;
    }
};