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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        int car=0;
        int flag=0;
        while(cur1!=NULL && cur2!=NULL)
        {
            int sum = cur1->val + cur2->val + car;
            if(sum>9)
            {
                car=1;
            }
            else
            {
                car=0;
            }
            cur1->val=sum%10;
            cur2->val=sum%10;
            cur1=cur1->next;
            cur2=cur2->next;

            if(cur1==NULL)
                flag=1;
            else if(cur2==NULL)
                flag=-1;
        }
        if(flag==1)
        {
            while(cur2!=NULL)
            {
                int sum = cur2->val + car;
                if(sum>9)
                {
                    car=1;
                }
                else
                {
                    car=0;
                }
            cur2->val=sum%10;
            cur2=cur2->next;
            }
            if(car==1)
            {
                ListNode* cur3 = l2;
                while(cur3->next!=cur2)
                {
                    cur3=cur3->next;
                }
                ListNode* newn = new ListNode(car);
                cur3->next=newn;
                newn->next=NULL;
            }
             return l2;
        }
        if(flag==-1)
        {
            while(cur1!=NULL)
            {
                int sum = cur1->val + car;
                if(sum>9)
                {
                    car=1;
                }
                else
                {
                    car=0;
                }
            cur1->val=sum%10;
            cur1=cur1->next;
            }
             if(car==1)
            {
                ListNode* cur3 = l1;
                while(cur3->next!=cur1)
                {
                    cur3=cur3->next;
                }
                ListNode* newn = new ListNode(car);
                cur3->next=newn;
                newn->next=NULL;
            }
        }
       
        return l1;
         
    } 
     
};