#include <iostream>
using namespace std;
struct node
{
    int data ;
    node* link;
};
class list
{
    node *start,*cur,*temp;
    public:
    list(){
        start =NULL;
    }
     void Append(int n ){
        if (start==NULL)
        {
            start= new node;
            start->data=n;
            start->link=NULL;
        }else{
            cur=start;
            while (cur->link!=NULL)
            {
                cur=cur->link;
            }
            temp=new node;
            temp->data=n;
            temp->link=NULL;
            
        }
        
    }
    void print(){
        cout<<"Data in linked list";
        cur=start;
            while (cur->link!=NULL)
            {
                cout<<cur->data<<endl;
                cur=cur->link;
            }
            cout<<cur->data<<endl;
    }
};

int main(){
list obj;
int value , p;
cout<<"Enter values ";
for (int i = 0; i < 5; i++)
{
    cin>>value;
    obj.Append(value);
}
obj.print();
    
return 0;
}