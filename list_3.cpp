struct node *reverse (struct node *head, int k)
{ 
    int cnt=0;
    struct node *prev=NULL;
    struct node *curr=head;
    struct node *next;
    while(curr!=NULL&&cnt<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL)
    {
        head->next=reverse(next,k);
    }
    return prev;
}

