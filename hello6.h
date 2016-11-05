//hello6.h

#ifndef HELLO6_H
#define HELLO6_H

class Hello6 {
private: 
	static int obj_count;	
	int id;
public:
	static int Total() {return obj_count;}
	void run(int=1,int=1);
        Hello6(int = 1);
        ~Hello6();
};

#endif //HELLO5_H
