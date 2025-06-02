#include <iostream>
using namespace std;

class seseorang{
    public:
    virtual void pesan(){
        cout << "chat from someone" << endl;
    }
};

class ijul :public seseorang{
    public:
        void pesan(){
            cout << "chat from ijul" << endl;
        }
};

class ilham :public seseorang{
    public:
        void pesan(){
            cout << "chat from ilham" << endl;
        }
};

int main(){
    seseorang* obyek;
    ijul a;
    ilham b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    return 0;
} 