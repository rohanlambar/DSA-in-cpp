// implement linkedlist and 
// its operation like create(),insert(),delete(),search(),display(),reverse(),count();
#include<bits/stdc++.h>
using namespace std;
class LL
{
    public:
struct node
{
int data;
struct node *link;
};
struct node *start;
LL()
{
    start=NULL;
}

void insert(int pos,int info);
void remove(int pos);
int search(int target);
void display();
int count();
void reverse();

};
void LL:: insert(int pos,int info)
{
struct node *newnode,*temp;
newnode=(struct node*)new(struct node);
newnode->data=info;
newnode->link=NULL;
if(start==NULL)
start=newnode;
else
{ temp=start;
    for(int i=1;i<pos-1;i++)
    {
      temp=temp->link;  
    }
newnode->link=temp->link;
temp->link=newnode;
}


}
void LL::display()
{
    struct node* temp;
    temp=start;
    while(temp!=NULL)
    {
              cout<<temp->data<<"->";
        temp=temp->link;
  
    }
    cout<<"NULL";
}

void LL::remove(int pos)
{struct node *temp;
    temp=start;
if(start==NULL)
{
    cout<<"Linkedlist is empty "<<endl;
    return ;
}
else if(pos==1)
{
  start=temp->link;
}
else
{
    
    for(int i=2;i<pos;i++)
    {
      temp=temp->link;
    }
   temp->link=temp->link->link;
}
}
int LL::search(int target)
{
    struct node* temp;
    temp=start;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->data==target)
        return ++count;
        temp=temp->link;

    }
    return -1;
}
int LL::count()
{
    struct node* temp;
    temp=start;
    int count=1;
    while(temp!=NULL)
    {
       
        temp=temp->link;
        count++;

    }
    return count;
}

void LL::  reverse()
{
    struct node *temp,*temp1;
    int hold;
   temp=start;
   temp1=start;

   int first=1;
   int last=count();
while(first<last)
{    
    for(int i=1;i<first;i++)
    {
        temp=temp->link;
    }
    for(int i=1;i<last;i++)
    {
        temp1=temp1->link;
    }
    hold=temp->data;
    temp->data=temp1->data;
  temp1->data=hold;
  first++;
  last--;
   
}

}


int  main()
{
    LL linkedls;
    linkedls.insert(1,6);
    linkedls.insert(2,4);
    linkedls.insert(3,5);
    linkedls.insert(4,6);
    linkedls.insert(5,7);  
    linkedls.insert(6,8);
    linkedls.remove(1);
    
    linkedls.display();
    cout<<endl;
   cout<< linkedls.search(5)<<endl;;
   cout<< linkedls.search(15)<<endl;
   cout<<"NO of element in list are "<<linkedls.count()<<endl;
    linkedls.reverse();
    linkedls.display();
    return 0;
}