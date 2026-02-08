// RGB LED Pin Definitions - RGB LED Pin Tanımlamaları
const int red = 9;
const int green = 10;
const int blue = 11;
const int sure = 1000; // Delay duration in milliseconds - Milisaniye cinsinden gecikme süresi

void setup() {
  // Set all LED pins as output - Tüm LED pinlerini çıkış olarak ayarla
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // Since we use a Common Anode RGB LED, LOW turns the color ON and HIGH turns it OFF.
  // Ortak Anotlu RGB LED kullandığımız için, LOW rengi AÇAR, HIGH ise KAPATIR.

  // RED ON - KIRMIZI AÇIK
  digitalWrite(red, LOW); 
  delay(sure);
  
  // GREEN ON (Red Off) - YEŞİL AÇIK (Kırmızı Kapalı)
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  delay(sure);

  // BLUE ON (Green Off) - MAVİ AÇIK (Yeşil Kapalı)
  digitalWrite(red, HIGH); // Safety check to ensure red is off - Kırmızının kapalı olduğundan emin olmak için
  digitalWrite(blue, LOW);
  delay(sure);

  // YELLOW / MIXED (Red + Green ON) - SARI / KARIŞIK (Kırmızı + Yeşil AÇIK)
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(sure);

  // ALL OFF - TÜMÜ KAPALI
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(sure);
}
