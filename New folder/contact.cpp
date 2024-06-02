#include <bits/stdc++.h>
using namespace std;
struct contact
{
    string name;
    string phoneNumber;
    string email;
};

void addContact(vector<contact> &c)
{
    contact temp;
    cout<<"Add your Name: ";
    cin>>temp.name;
    cout<<"Add your Email: ";
    cin>>temp.email;
    cout<<"Add your Phone Number: ";
    cin>>temp.phoneNumber;
    c.push_back(temp);
};
void viewContacts(const vector<contact> &c)
{
    if(c.empty())
    {
        cout<<"No contacts Available"<<endl;
    }
    else{
        cout<<"CONTACT LIST :"<<endl;
        {
            for(auto it:c)
            {
                cout<<"Name: "<<it.name<<endl;
                cout<<"Email: "<<it.email<<endl;
                cout<<"Contact Number: "<<it.phoneNumber<<endl;
                cout<<"-------------------------------------"<<endl;
            }
        }
    }
};
void editContact(vector<contact> &c)
{
    cout<<"Enter Previous Name which you want to edit :"<<endl;
    string temp;
    cout<<"Add Name: ";
    cin>>temp;
    for(auto it=c.begin();it!=c.end();it++)
    {
        string Name;
        if(it->name==temp){
            cout<<"Enter New Values:"<<endl;
            
            cout<<"Name: ";
            cin>>Name;
            it->name=Name;
            cout<<"Email: ";
            cin>>Name;
            it->email=Name;
            cout<<"Contact Number: ";
            cin>>Name;
            it->phoneNumber=Name;
            cout<<"Contact edited successfully..."<<endl;
            return;
        }
    }
    cout<<"countact Not Found"<<endl;
};
void deleteContact(vector<contact> &c)
{
    cout<<"Enter Name which you want to delete :"<<endl;
    string temp;
    cout<<"Add Name: ";
    cin>>temp;
    // c.push_back(temp);
    for(auto it=c.begin();it!=c.end();it++)
    {
        if(it->name==temp){
            it=c.erase(it);
            cout<<"Contact deleted successfully..."<<endl;
            return;
        }
    }
    cout<<"countact Not Found"<<endl;

}

int main() {
    vector<contact>c;
    int option=0;
    while(option!=5){
        cout<<"-----------------------------"<<endl;
        cout<<"Enter 1 for adding contact "<<endl;
        cout<<"Enter 2 for viewing contact list"<<endl;
        cout<<"Enter 3 for deleting contact "<<endl;
        cout<<"Enter 4 for editing exixting contact "<<endl;
        cout<<"Enter 5 for Exit"<<endl;
        cin>>option;
        if(option==1)
        {
            addContact(c);
        }
        else if(option==2)
        {
            viewContacts(c);
        }
        else if(option==3)
        {
            deleteContact(c);
        }
        else if(option ==4)
        {
            editContact(c);
        }
        else if(option ==5)
        {
            return 0;
        }
        else{
            cout<<"Invalid option choosed"<<endl;
        }
    }
    
}