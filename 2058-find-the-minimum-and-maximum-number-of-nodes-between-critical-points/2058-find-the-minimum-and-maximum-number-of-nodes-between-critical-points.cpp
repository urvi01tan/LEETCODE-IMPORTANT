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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*temp=head;
        ListNode*next=temp->next;
        int i=1;
        vector<int>ans;
        while(next!=NULL)
        { if(prev!=NULL && next!=NULL)
        {
            int a=prev->val;
            int b=temp->val;
            int c=next->val;
            if((b>a&&b>c)||(b<a&&b<c))
            {
ans.push_back(i);
            }
           
        }
         prev=temp;
            temp=temp->next;
            next=temp->next;
            i++;

        }
        if(ans.size()==0||ans.size()==1)return {-1,-1};
        sort(ans.begin(),ans.end());
        int maxi=ans[ans.size()-1]-ans[0];
        int mini=1e8;
        for(int i=1;i<ans.size();i++)
        {
            mini=min(mini,ans[i]-ans[i-1]);
        }
      
        return {mini,maxi};
    }
};