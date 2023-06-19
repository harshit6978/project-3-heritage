#include<iostream>

using namespace std;


class mother{
	
	public:
		void both(){
			
			cout<<"house wife,supporter"<<endl;
			
		}
};

class daugter : public mother{
	
	public:
		void both2(){
			
			cout<<"enjoy your life";
			
		}
};

int main(){
	
	daugter obj;
	
	obj.both();
	obj.both2();
	return 0;
}
