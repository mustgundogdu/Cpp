
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sifre=1234,ksifre,hak=2;
	string kadi;
	cout<<endl<<"Kullanici adinizi giriniz:";
	cin>>kadi;
	cout<<"sifrenizi Giriniz:";
	cin>>ksifre;
	
	if(ksifre!=sifre)
	{
	 for(;hak<=2;hak--)
	 {
	  cout<<endl<<"!HATALI SİFRE!!\a";
	  cout<<"Tekrar giriniz:"<<endl;
	  cin>>ksifre;
	  if(hak==0)
	  break;

	 }	
	
	
	}
	else{
		cout<<"HOsGELDİNİZ..."<<endl;
		
		
	}
	system("pause");
	
	
	
	
}
