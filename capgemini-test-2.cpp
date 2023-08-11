class A{
    public:
    virtual void print(){};
};

class B : public A{
    public:
    void print(){};
};

int main(){

    A *a = new B();
    a->print();
}