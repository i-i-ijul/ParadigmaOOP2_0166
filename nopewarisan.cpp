#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan(){
        cout << "hallo saya ijul dari brebes";
    }
};

class derivedClass : public baseClass{ //gabisa dipanggil karena si baseclass udah final
    public:
        void perkenalan(){
            cout << "hallo saya ilham dari juragan empang";
        }
};

int main(){
    derivedClass a;
    a.perkenalan();

    return 0;
}