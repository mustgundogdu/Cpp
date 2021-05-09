#include<iostream>
using namespace std;

class Sure{

		private:
			int saat;  
			int dakika; 
			int saniye;  

		public:
			Sure(){
				
				saat = 0;
				dakika = 0;
				saniye = 0;
				
				
			
			}
			
			Sure(double h, double m, double s){
				
				set_saat(h);
				set_dakika(m);
				set_saniye(s);
			
			}

			
			int get_saat() {  return saat; } 
			int get_dakika() { return dakika; } 
			int get_saniye() { return saniye; } 
			
			void set_saat(double h)
			{
				
          			
				ekle_saat(h);
				
			}
			
			
			void set_dakika(double m)
			{	
						
				ekle_dakika(m);
			}

			void set_saniye(double s)
			{
				
				ekle_saniye(s);
			}
			
			void ekle_saat(double h)
			{
				
				int saat_int_part = (int) h;
				int decimal_part = (h - saat_int_part);
				
				
				if (decimal_part == 0)
				{
					saat = h;

				}
				else{
				
					Saat(decimal_part);
				}	
			}

			
			void ekle_dakika(double m)
			{
				
				int dakika_int_part = (int)m;
				int dakika_decimal_part = (m - dakika_int_part);

				if(dakika_decimal_part == 0)
				{
					dakika = (int)m % 60;
					saat += (int)(m/60);
				}
				else{
				
					Dakika(dakika_decimal_part);
				
				}
				
			}	

			void ekle_saniye(double s)
			{

				int saniye_int_part = (int)s;
				int saniye_decimal_part = (s - saniye_int_part);

				if (saniye_decimal_part == 0)
				{
				
					saniye = (int)s % 60;
					dakika += (int) (s / 60);

				}
				else{
				
					Saniye(saniye_decimal_part);
				
				}
				
			}

			
			double Saat(double decimal_part){
				
				int calc_dakika = decimal_part * 10;
				int mod_saat = calc_dakika % 60;


				if(mod_saat == 0)
				{
					saat += calc_dakika / 60;
				
				}

				else{
				
					if (calc_dakika > 60)
					{
						
						int dakika_ekle = calc_dakika - 60;
						int kalan_saat_ekle = calc_dakika - dakika_ekle;
						saat += kalan_saat_ekle / 60;
						dakika += dakika_ekle;
				
					}
					else if(calc_dakika < 60)
					{
						int kalan_dakika = 60 - calc_dakika;
						dakika += kalan_dakika;	
							
					}
					
				}
				


			}

			double Dakika(double dakika_decimal_part){
				
				int calc_saniye = dakika_decimal_part * 10;
				int mod_dakika = calc_saniye % 60;

				if(mod_dakika == 0)
				{
					dakika += calc_saniye / 60;
				
				}
				else
				{

					if(calc_saniye > 60)
					{
						
						int saniye_ekle = calc_saniye - 60;
						int kalan_saniye_ekle = calc_saniye - saniye_ekle;

						saniye += saniye_ekle;
						dakika += kalan_saniye_ekle / 60;
				
					}
					else if(calc_saniye < 60)
					{
						int kalan_saniye = 60 - calc_saniye;
						saniye += kalan_saniye;
					
					}
				}
				
			}

			int Saniye(int saniye_decimal_part){
			
				int calc_salise = saniye_decimal_part * 10;
				int mod_salise = calc_salise % 60;
				if(mod_salise == 0)
				{
					saniye += calc_salise / 60;
				}
				else{
					if(calc_salise > 60)
					{
						int salise_ekle = calc_salise - 60;
						int kalan_salise_ekle = calc_salise - salise_ekle;
						saniye += kalan_salise_ekle / 60;
					}
				
				
				}
			}

			

};
int main()
{
	Sure t(13.50, 6.60, 60.50);
        Sure time(t);

	
        cout << time.get_saat() << " " << time.get_dakika()<<" "<<time.get_saniye()<< endl;

	return 0;


}
