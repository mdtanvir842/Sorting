#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct Node{
    int data;
    struct Node *next;
};

struct Node* Insert_Begin(struct Node *first,int data){
    struct Node *tmp=(struct Node *)malloc(sizeof(struct Node));
    tmp->data=data;
    tmp->next=first;
    return tmp;
};
void Insert_middle(struct Node *first,int data,int index){

    struct Node *temp1=(struct Node *)malloc(sizeof(struct Node));
    struct Node *temp2=(struct Node *)malloc(sizeof(struct Node));
    struct Node *temp3=(struct Node *)malloc(sizeof(struct Node));
    temp1=first;
    int i;
    for( i=0;i<index-1;i++){
        temp1=temp1->next;

    }
    //cout<<i<<endl;
    temp3=temp1->next;
    temp1->next=temp2;
    temp2->data=data;
    temp2->next=temp3;
};
void Insert_end(struct Node *fourth,int data){
    struct Node *tmp2=(struct Node *)malloc(sizeof(struct Node));
    fourth->next=tmp2;
    tmp2->data=data;
    tmp2->next=NULL;
};
void treversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    optimize();
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *head;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    first->data=5;
    first->next=second;

    second->data=15;
    second->next=third;

    third->data=25;
    third->next=fourth;

    fourth->data=35;
    fourth->next=NULL;

    head->next=first;
    int x;
    int a;
    cin>>x>>a;
    if(x==0){
        head->next=Insert_Begin(first,a);
    }
    else if(x==5){
      Insert_end(fourth,a);  
    }
    else{
        Insert_middle(head->next,a,x);
    } 
    
    treversal(head->next);
}
