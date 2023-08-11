class A{
    public:
    virtual void print(){};
};

class B : public A{
    public:
    virtual void print(){};
};

class C : public B{
    public:
    void print(){};
};

int main(){

    C *c =new C();
    c->A::print();
    c->B::print();
    c->C::print();

    return 0;
}