#include "loginmanagement.h"

LoginManagement::LoginManagement()
{
    cout<<"LoginManagement constructor called"<<endl;
}
LoginManagement::~LoginManagement()
{
    cout<<"LoginManagement destructor called"<<endl;
}
void LoginManagement::signUpadmin()
{
    string username,password;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
    adminlist.push_back(Admin(username,password));
    cout<<"Admin sign up successfully!"<<endl;
}
void LoginManagement::signInadmin()
{
    string username,password;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
    for(auto i= adminlist.begin();i!=adminlist.end();i++)
    {
        if(i->getusername() == username && i->getpassword() == password)
        {
            cout<<"Admin logged in successfully!"<<endl;
            return;
        }
    }
}
void LoginManagement::signUpUser()
{
    string username,password,phonenumber,emailid;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
    cout<<"Enter phonenumber: ";
    cin>>phonenumber;
    cout<<"Enter emailid: ";
    cin>>emailid;
    userlist.push_back(User(username,password,phonenumber,emailid));
    cout<<"User singup successfully!"<<endl;
}
void LoginManagement::signInUser()
{
    string username,password,phonenumber,emailid;
    cout<<"Enter username:  ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
    cout<<"Enter phonenumber: ";
    cin>>phonenumber;
    cout<<"Enter emailid: ";
    cin>>emailid;
    for(auto i=userlist.begin();i!=userlist.end();i++)
    {
        if(i->getphonenumber() == phonenumber)
        {
            cout<<"User already exits! plese try a different phonenumber.\n";
            return;

        }
    }
    User newUser(username,password,phonenumber,emailid);
    userlist.push_back(newUser);
}
void LoginManagement::addAdmin()
{
    string username,password;
    cout<<"Enter admin username: ";
    cin>>username;
    cout<<"Enter admin password: ";
    cin>>password;
    adminlist.push_back(Admin(username,password));
    cout<<"Admin added successfully!"<<endl;
}

void LoginManagement::deleteAdmin()
{
    string username;
    cout<<"Enter admin username to delete: ";
    cin>>username;
    for(auto i=adminlist.begin();i!=adminlist.end();i++)
    {
        if(i->getusername() == username)
        {
        adminlist.erase(i);
        cout<<"Admin deleted successfully!"<<endl;
        return;
        }
    }
    cout<<"Admin not found!"<<endl;
}
void LoginManagement::updateAdmin()
{
    string username,new_password;
    cout<<"Enter username to update: ";
    cin>>username;
    for(auto i=adminlist.begin();i!=adminlist.end();i++)
    {
        if(i->getusername() == username)
        {
            cout<<"Enter new password: ";
            cin>>new_password;
            i->setpassword(new_password);
            cout<<"Admin update successfully!"<<endl;
            return;
        }
    }
    cout<<"Admin not found!"<<endl;
}
void LoginManagement::addUser()
{
    string username,password,phonenumber,emailid;
    cout<<"Enter user username: ";
    cin>>username;
    cout<<"Enter user password: ";
    cin>>password;
    cout<<"Enter user phonenumber: ";
    cin>>phonenumber;
    cout<<"Enter user email id: ";
    cin>>emailid;
    userlist.push_back(User(username,password,phonenumber,emailid));
    cout<<"User added successfully!"<<endl;
}
void LoginManagement::deleteUser()
{
    string username;
    cout<<"Enter User username to delete: ";
    cin>>username;
    for(auto i=userlist.begin();i!=userlist.end();i++)
    {
        if(i->getusername() == username)
        {
            userlist.erase(i);
            cout<<"user deleted successfully!"<<endl;
            return;
        }
    }
    cout<<"user not found!"<<endl;
}
void LoginManagement::updateUser()
{
    string username,new_password;
    cout<<"Enter username to update: ";
    cin>>username;
    for(auto i=userlist.begin();i!=userlist.end();i++)
    {
        if(i->getusername() == username)
        {
            cout<<"Enter new password: ";
            cin>>new_password;
            i->setpassword(new_password);
            cout<<"user update successfully!"<<endl;
            return;
        }
    }
    cout<<"user not found!"<<endl;
}
void LoginManagement::loginManagement()
{
    int loginmanagementchoice;
    while(true)
    {
        cout<<"\n Login Management ";
        cout<<"1.Sign Up admin: ";
        cout<<"2.Sign In admin: ";
        cout<<"3.Add admin: ";
        cout<<"4.Delete admin: ";
        cout<<"5.Update admin: ";
        cout<<"6.Sign Up user: ";
        cout<<"7.Sing In user: ";
        cout<<"8.Add User: ";
        cout<<"9.Delete user: ";
        cout<<"10.Update user: ";
        cout<<"Enter a choice: ";
        cin>>loginmanagementchoice;
        switch(loginmanagementchoice)
        {
        case 1:
            signUpadmin();
            break;
        case 2:
            signInadmin();
            break;
        case 3:
            addAdmin();
            break;
        case 4:
            deleteAdmin();
            break;
        case 5:
            updateAdmin();
            break;
        case 6:
            signUpUser();
            break;
        case 7:
            signInUser();
            break;
        case 8:
            addUser();
            break;
        case 9:
            deleteUser();
            break;
        case 10:
            updateUser();
            break;
        case 11:
            cout<<"Exiting...."<<endl;
            break;
        default:
            cout<<"Invalid choice ! Try again."<<endl;
        }
    }
    while(loginmanagementchoice!=9);
    loginManagement.alldetails();
}
