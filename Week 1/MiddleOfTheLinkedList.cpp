/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* CurrentNode;
        CurrentNode = head;
        int count =0;
        while(CurrentNode != NULL){
            count++;
            CurrentNode = CurrentNode->next;
        }
        int middleNode;
        middleNode = ceil(count/2);
        count =0, CurrentNode= head;
        while(CurrentNode != NULL){
            if(count >= middleNode){
                head = CurrentNode;
                return head;
            }
            count++;
            CurrentNode = CurrentNode->next;
        }
    return NULL;
    }
};
