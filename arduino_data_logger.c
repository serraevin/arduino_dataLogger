








#include SPI.h
#include SD.h

const int cs_Pin = 4;
int bilgi_1 = 0;
int bilgi_2 = 0;

#define buton 2
#define ledPin 3
int okuma;

void setup() {

Serial.begin(9600);
pinMode(buton,INPUT);
pinMode(ledPin,OUTPUT);
while (!Serial) {
Serial.println(USB Arayüz Kontrolü) ;
}

Serial.println(SD Kart Modülü Başlatılıyor...);
delay(500);
 
if (!SD.begin(cs_Pin)) {
Serial.println(Kart Hatası, SD Kart Okunamadı);

while (1)led();
}
Serial.println(SD Kart Modülü Başlatıldı);
delay(500);
led();
 
}



void led(){
 
digitalWrite(ledPin,1);
delay(50);
digitalWrite(ledPin,0);
delay(50);
 
}



void loop() {

File bilgiler = SD.open(git_yaz.txt, FILE_WRITE);
 
bilgi_1++;
bilgi_2+=100;
delay(1000);



if (bilgiler) {
bilgiler.print(bilgi_1);
led();
bilgiler.print( , );
bilgiler.println(bilgi_2);
led();
bilgiler.close();
 
Serial.print(bilgi_1);
Serial.print(t);
Serial.println(bilgi_2);
}

else {
Serial.println(HATA..txt bilgi eklenemiyor!...);
led();
}




while (digitalRead(buton) == HIGH)
{


bilgiler = SD.open(git_oku.txt);

if (bilgiler)
{
Serial.println(txt içindeki bilgiler);
while (bilgiler.available()) {
Serial.write(bilgiler.read());

}

bilgiler.close();
Serial.println( );

}
 
delay(1000);
while (digitalRead(buton) == HIGH)
{

}




}

}
 


