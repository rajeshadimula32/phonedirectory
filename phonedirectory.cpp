#include<bits/stdc++.h>
using namespace std;

int len=0;

struct phonebook
{
    string name;
    string ph_no;
    string email;
    string address;
}a[50];

void addcontact()
{
    cout << "enter name    : ";
    cin >> a[len].name;
    cout << "enter phone no: ";
    cin >> a[len].ph_no;
    cout << "enter email   : ";
    cin >> a[len].email;
    cout << "enter address : ";
    cin >> a[len].address;
    len++;
}

void listcont()
{
    if(len==0)
    {
        cout << "no contacts" <<endl;
        return;
    }
    cout << " **** list of all contacts **** "<< endl;
    for(int i=0;i<len;i++)
    {
        cout << "name    :";
        cout << a[i].name <<endl;
        cout << "phone no:";
        cout << a[i].ph_no <<endl;
        cout << "email   :";
        cout << a[i].email <<endl;
        cout << "address :";
        cout << a[i].address <<endl;
        cout <<endl;
    }
}
void searchcontact(string s)
{
    int pos=-1;
    for(int i=0;i<len;i++)
    {
        if(a[i].name==s)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout << "no contanct found" <<endl;
        cout <<endl;
        return;
    }
    cout << "name   :";
    cout << a[pos].name <<endl;
    cout << "phone no:";
    cout << a[pos].ph_no <<endl;
    cout << "email   :";
    cout << a[pos].email <<endl;
    cout << "address :";
    cout << a[pos].address <<endl;
    cout <<endl;
}
void updateContact(string s)
{
    int pos=-1;
    for(int i=0;i<len;i++)
    {
        if(a[i].name==s)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout << "no contanct found" <<endl;
        return;
    }
    cout << "enter new name        :";
    cin >> a[pos].name;
    cout << "enter new phone number:";
    cin >> a[pos].ph_no;
    cout << "enter new email       :";
    cin >> a[pos].email;
    cout << "enter new address     :";
    cin >> a[pos].address;
    cout << "contact updated successfully" <<endl;
    return;
}

void deleteContact(string s)
{
    int pos=-1;
    for(int i=0;i<len;i++)
    {
        if(a[i].name==s)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout << "no contanct found" <<endl;
        return;
    }
    for(int i=pos;i<len-1;i++)
    {
        a[i]=a[i+1];
    }
    cout << "contact deleted successfully" <<endl;
    len--;
    return;

}

int main()
{
    int op;
    do
    {
        cout << "    ***** phone book ****      "<<endl;
        cout << "add contact     ->1" <<endl;
        cout << "update contact  ->2" <<endl;
        cout << "delete contact  ->3" <<endl;
        cout << "display contacts->4"<<endl;
        cout << "search contact  ->5" <<endl;
        cout << "exit            ->0"<<endl;
        cout << "     ****   ******   *****" <<endl;
        cout << "select the mode(press number)" <<endl;
        cin >> op;
        switch(op)
        {
        case 1:
            {
                addcontact();
                cout << "contact added successfully" <<endl;
                cout <<endl;
                break;
            }
        case 2:
            {
                cout << "enter the name to be update:";
                string updname;
                cin>>updname;
                updateContact(updname);
                cout <<endl;
                break;
            }
        case 3:
            {
                string delname;
                cout << "enter the name to be delted:";
                cin >>delname;
                deleteContact(delname);
                cout <<endl;
                break;
            }
        case 4:
            {
                listcont();
                break;
            }
        case 5:
            {
                string searchname;
                cout << "enter the name to search:";
                cin >>searchname;
                searchcontact(searchname);
                break;
            }
        case 0:
            {
                cout << "exiting...." <<endl;
                cout <<endl;
                break;
            }
        default:
            {
                cout << "enter given numbers only.." <<endl;
                cout <<endl;
                break;
            }
        }
    }while(op);
    return 0;
}
