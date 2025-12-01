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
    int gcd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* cur=head;
        while(cur->next!=NULL)
        {
            ListNode* cn = cur->next;
            int hcf= gcd(cur->val,cn->val);
            ListNode* temp = new ListNode(hcf);
            temp->next= cn;
            cur->next=temp;
            cur=cn;
            cn=cur->next;
        }  
        return head; 
    }
};