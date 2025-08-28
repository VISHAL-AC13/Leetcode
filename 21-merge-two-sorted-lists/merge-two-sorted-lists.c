/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addNode(int n,struct ListNode* first){
    struct ListNode* newnode;
    struct ListNode* temp=first;
    newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
     newnode->next=NULL;
     newnode->val=n;
     if(first==NULL){
        first=newnode;
        return first;
     }
     while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=newnode;
     return first;

}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* result=NULL;
    if(list1==NULL&&list2!=NULL){
        return list2;
    }
    if(list1!=NULL&&list2==NULL){
        return list1;
    }
    while(list1!=NULL&&list2!=NULL){
        if(list1->val<list2->val){
                result=addNode(list1->val,result);
                list1=list1->next;
        }
        else if(list1->val==list2->val){
                result=addNode(list1->val,result);
                result=addNode(list2->val,result);
                list1=list1->next;
                list2=list2->next;
        }
        else{
            result=addNode(list2->val,result);
                list2=list2->next;
        }
    }
    struct ListNode* last=result;
    while(last!=NULL&&last->next!=NULL){
        last=last->next;
    }
    if(list1!=NULL){
        last->next=list1;
    }
    if(list2!=NULL){
        last->next=list2;
    }
    return result;
}