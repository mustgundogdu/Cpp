Endian testi Örneğimizin Açıklaması:
Öncelikle binary sistemde yani ikilik tabanda okuma şöyle gerçekleşir;
* Little Endian okuma şekli,
00000001 =1*(2^0)+0*(2^1)+....+0*(2^8) =1
 Yani değeri 1 dir.
* Big Endian okuma şekli   
00000001 =0*(2^0)+0*(2^1)+....+1*(2^8) =256
Yani değeri 256 dir.
 
Yapılan Endian testinde sağdan okuma yapılıyorsa yani düşük anlamlı bitten yüksek anlamlı bit'e doğru ise Little Endian formatında okuma,
Tam tersi soldan okuma yapılıyorsa yani Yüksek anlamlı bitten düşük anlamlı bite doğru ise işlemci Big Endian formatında okuma yapıyordur.
Bunu bulmak için Kodda 1 sayısı integer değer olduğu için bellekte 4 byte alan kaplar biz bu test için 1 byte yani 8 bit lik bir alanda okuma değerini hesaplarız yani char (1 byte) ile bir pointer tanımlar n'nin adresini (1 byte lık olarak) char adresinde test ederiz.
           
