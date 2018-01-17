#include<iostream>
#include<string>

using namespace std;

class linux{
	public:
		void opensource(string bebas);
		int versi;
		string tipe;
};

int main(){
	linux debian,redhat,ubuntu,fedora;
	
	debian.tipe="Gampang dipahami";
	redhat.tipe="Support Berbagai Aplikasi";
	ubuntu.tipe="Tampilan Keren";
	fedora.tipe="Lisensi Gratis";
	
	cout<<(ubuntu.tipe);
	ubuntu.opensource("13.1");
	fedora.opensource("11.0");
}
void debian::opensource(string tipe){
	cout<<"Open Source"<<bebas<<"!!"<<endl;
}
