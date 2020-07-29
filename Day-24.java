Day 24: Linked List 

if (head == null || head.next == null){
        return head;
    }
    if (head.data == head.next.data){
        head.next = head.next.next;
        removeDuplicates(head);
    }else{
        removeDuplicates(head.next);
    }
    return head;