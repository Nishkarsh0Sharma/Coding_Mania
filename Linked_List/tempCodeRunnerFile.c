void insert(struct Node *,int pos,int x)
// {
//     struct Node *t,*p;
//     if(pos==0)
//     {
//         t=new Node;
//         t->data=x;
//         t->next=first;
//         first=t;
//     }
//     else if(pos>0)
//     {
//         p=first;
//         for(int i=0;i<pos-1 && p;i++)
//          p=p->next;
//         if(p)
//         {
//             t=new Node;
//             t->data=x;
//             t->next=p->next;
//             p->next=t;
//         }
//     }
// }