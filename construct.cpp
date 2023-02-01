pb5:
#include<iostream>
using namespace std;

class samp{
private:
    int i;
public:
    samp(){
    cout<<"constractin..."<<endl;
    }
    samp(int n){
    i=n;
    cout<<"constractin..."<<endl;
    }
    int get_i(){
    return i;
    }
    void set_i(int n){
    i=n;
    }
    };
    samp makedouble(samp ob){
    ob.set_i(ob.get_i()*2);
    return ob;
    }

    int main(){
    samp ob1(10),
    ob2();
    cout<<"i in ob1="<<ob1.get_i()<<endl;
    ob2=markdouble(ob1);
    cout<<"i in ob2="<<ob2.get_i()<<endl;

    return 0;
    }


    pb6:


    #include<iostream>
#include<cstring>
using namespace std;
class samp{
private:
    char *s;
public:
    samp(){
    s="\0";
    cout<<"Contrucor..."<<endl;
    }
    ~samp(){
    if(s){
        free(s);
        cout<<"Freeing...";
    }
    }
    void show(){
    cout<<s<<endl;
    }
    void set_str(char*str);


};
void samp::set_str(char*str){
s=(char *)malloc(strlen(str)+1);
if(!s){

    cout<<"allocation...\n";
    exit(1);
}
strcpy(s,str);
}
samp input(){
cout<<"enter a String:";
samp localobj;
char s[80];
cin>>s;
localobj.set_str(s);
return localobj;
}
int main(){
samp ob;
ob=input();
ob.show();
return 0;

}

pb7....

#include<iostream>
using namespace std;
class person{
private :
    int id;
    string name;

public:
    person(int i,string n)
    id=i;
    name=n;
    cout<<"constracting...\n"<<endl;
    ~person(){
    cout<<"destraction...\n"<<endl;
    }
    int get_name()
    {

        return name;
    }
    int get_id()
    {
        return id;
    }
    void set_i(int i,string n)
    {
        id=i;
        name=n;
    }
    };

