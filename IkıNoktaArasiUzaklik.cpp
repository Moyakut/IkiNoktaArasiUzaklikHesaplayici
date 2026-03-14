#include <iostream>
#include <cmath>
#include <thread>

using namespace std;

int main() {

    setlocale(LC_ALL, "Turkish");

    cout << "İki Nokta Arasındaki Uzaklık Bulucuya Hoşgeldiniz!" << endl;
    cout << "'d² = (x2 - x1)² + (y2 - y1)²' Formülünü kullanarak iki nokta arasındaki uzaklığı bulabilirsiniz!" << endl;

    this_thread::sleep_for(chrono::seconds(1));

    cout << "x1'i giriniz!" << endl;
    float x1 = 0;
    while (!(cin >> x1)) {
        cout << "HATA! Lütfen bir sayı giriniz!";

        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    cout << "x2'i giriniz!" << endl;
    float x2 = 0;
    while (!(cin >> x2)) {
        cout << "HATA! Lütfen bir sayı giriniz!";

        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    cout << "y1'i giriniz!" << endl;
    float y1 = 0;
    while (!(cin >> y1)) {
        cout << "HATA! Lütfen bir sayı giriniz!";

        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    cout << "y2'yi giriniz!" << endl;
    float y2 = 0;
    while (!(cin >> y2)) {
        cout << "HATA! Lütfen bir sayı giriniz!";

        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    cout << "Hesaplama yapılıyor..." << endl;

    float xkare = pow((x2 - x1), 2);
    float ykare = pow((y2 - y1), 2);

    float resultKare = xkare + ykare;
    float result = sqrt(resultKare);

    cout << "Sonuç hesaplandı!" << endl;
    this_thread::sleep_for(chrono::milliseconds(700));
    cout << "Hesaplandı!" << endl;
    this_thread::sleep_for(chrono::milliseconds(200));
    cout << "Sonuç(d²) : " << result << endl;
    return 0;
}