#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct Node{
    int data;
    struct Node *next;
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
    treversal(first);
}
