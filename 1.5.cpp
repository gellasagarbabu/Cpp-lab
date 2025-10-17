#include<iostream>
using namespace std;
class classA
{
	private:
		int sno;
		public:
			int pincode;
			protected:
				int mobno;
};
class classB:public classA
{
	public:
		void disp()
		{
			cout<<"pincode:"<<pincode;
		}
};
int main()
{
	classA ob;
	ob.pincode=533437;
	cout<<ob.pincode;
	classB obb;
	obb.pincode=534447;
	obb.disp();
}
