#include <iostream>

class account
{
    private:
        std::string username;
        std::string password;

    public:
        void setusername(std::string uname)
        {
            username = uname;
        }

        void setpassword(std::string pword)
        {
            password = pword;
        }

        std::string getusername()
        {
            return username;
        }

        std::string getpassword()
        {
            return password;
        }

};

void _register()
{
    
}

int main()
{
    int choice;
    do
    {
        std::cout << "Choose:\n1 to register account\n2 to login to existing account\n3 or any other key to exit" << std::endl;
        std::cin >> choice;
        switch(choice)
        {
            case 1:
            //register
            case 2:
            //login
            default:
            break;
        }
    }while(choice == 1 || choice == 2);
    return 0;
}