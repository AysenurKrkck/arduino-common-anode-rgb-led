# arduino-common-anode-rgb-led
Simple RGB LED control with Common Anode logic on Arduino. / Arduino üzerinde Ortak Anot RGB LED kontrolü

# Arduino RGB LED Control (Common Anode) 🌈

This project demonstrates how to control an RGB LED using an Arduino. The project is specifically configured for **Common Anode** RGB LEDs.

Bu proje, Arduino kullanarak bir RGB LED'in nasıl kontrol edileceğini gösterir. Proje özellikle **Ortak Anot** RGB LED'ler için yapılandırılmıştır.

---

## 📘 Project Overview / Proje Özeti

In a Common Anode RGB LED, the longest pin is connected to the positive terminal (5V). Therefore, the pins must be set to `LOW` to turn the LED on and `HIGH` to turn it off. This project cycles through basic colors.

Ortak Anotlu RGB LED'lerde en uzun pin artı uca (5V) bağlanır. Bu nedenle, LED'i yakmak için pinlerin `LOW`, söndürmek için ise `HIGH` yapılması gerekir. Bu proje temel renkler arasında geçiş yapar.

---

## 🛠 Hardware Required / Gerekli Donanım

* Arduino (Uno, Nano, etc.)
* 1x RGB LED (**Common Anode / Ortak Anot**)
* 3x 220 Ohm Resistors / Direnç
* Jumper Wires / Kablolar

---

## 🔌 Connection / Bağlantı Şeması

| RGB LED Pin | Arduino Pin | Logic (Mantık) |
| :--- | :--- | :--- |
| Red (Kırmızı) | Pin 9 | LOW = ON / HIGH = OFF |
| Common Anode | 5V | Positive / Artı |
| Green (Yeşil) | Pin 10 | LOW = ON / HIGH = OFF |
| Blue (Mavi) | Pin 11 | LOW = ON / HIGH = OFF |

---

## 💻 Code / Kod

The main logic is inside the `loop()` function. Pay attention to the inverted logic due to the Common Anode structure.

Ana mantık `loop()` fonksiyonu içindedir. Ortak Anot yapısından kaynaklanan ters mantığa dikkat edin.

![green](https://github.com/user-attachments/assets/3a8ce044-b414-425e-ba3b-b3219f65deb1)
![white](https://github.com/user-attachments/assets/77ef30bd-78f9-427f-82d3-ea7d6064336d)
![red](https://github.com/user-attachments/assets/3b7f11f5-aa01-4111-9c5f-3fbb8ded2504)
![blue](https://github.com/user-attachments/assets/5b1f55f7-bdfa-426f-9e59-daa25164a88c)

```cpp
// Example Snippet
digitalWrite(red, LOW); // Red turns ON - Kırmızı AÇILIR


