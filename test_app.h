#ifndef TEST_APP_H
#define TEST_APP_H

class Print
{
private:
    const char *_name;
    const char *_name_two;
public:
	Print(const char *name, const char *name_two);
	~Print();
    void print();
};

#endif