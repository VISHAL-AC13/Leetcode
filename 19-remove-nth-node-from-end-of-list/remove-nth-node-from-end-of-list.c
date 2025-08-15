
/* struct ListNode {
     int val;
     struct ListNode *next;
 };*/
 int count(struct ListNode* head){
    int count=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
 }
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp;
    struct ListNode* prev;
    temp=head;
    int i=0;
    int c=count(head);
    if(c==n){
        head=head->next;
        return head;
    }
    while(i<c-n){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    return head;
}