#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[102];
    int i,total=0;;
    cin.get(s,102);

    if(strstr(s,"Danil"))
    {
        char *p=s;
        while ( (p=strstr(p,"Danil")) != NULL )
        {
            total++;
            p++;
        }

        if(strstr(s,"Olya"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Slava"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Ann"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Nikita"))
        {
            cout<<"NO";
        }
        else if(total>1)
        {
            cout<<"NO";
        }
        else cout<<"YES";
    }
    else if(strstr(s,"Olya"))
    {
        char *p=s;
        while ( (p=strstr(p,"Olya")) != NULL )
        {
            total++;
            p++;
        }

        if(strstr(s,"Danil"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Slava"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Ann"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Nikita"))
        {
            cout<<"NO";
        }
        else if(total>1)
        {
            cout<<"NO";
        }
        else cout<<"YES";
    }
    else if(strstr(s,"Slava"))
    {
        char *p=s;
        while ( (p=strstr(p,"Slava")) != NULL )
        {
            total++;
            p++;
        }

        if(strstr(s,"Olya"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Danil"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Ann"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Nikita"))
        {
            cout<<"NO";
        }
        else if(total>1)
        {
            cout<<"NO";
        }
        else cout<<"YES";
    }
    else if(strstr(s,"Ann"))
    {
        char *p=s;
        while ( (p=strstr(p,"Ann")) != NULL )
        {
            total++;
            p++;
        }

        if(strstr(s,"Olya"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Slava"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Danil"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Nikita"))
        {
            cout<<"NO";
        }
        else if(total>1)
        {
            cout<<"NO";
        }
        else cout<<"YES";
    }
    else if(strstr(s,"Nikita"))
    {
        char *p=s;

        while ( (p=strstr(p,"Nikita")) != NULL )
        {
            total++;
            p++;
        }

        if(strstr(s,"Olya"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Slava"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Ann"))
        {
            cout<<"NO";
        }
        else if(strstr(s,"Danil"))
        {
            cout<<"NO";
        }
        else if(total>1)
        {
            cout<<"NO";
        }
        else cout<<"YES";
    }
    else cout<<"NO";


    return 0;
}
