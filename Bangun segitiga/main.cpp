#include <iostream>
using namespace std;

int main() {
    int t, arah;
    cout << "Masukkan tinggi segitiga: ";
    cin >> t;

    cout << "Pilih arah segitiga:\n";
    cout << "1. Kiri Atas\n";
    cout << "2. Kiri Bawah\n";
    cout << "3. Kanan Atas\n";
    cout << "4. Kanan Bawah\n";
    cout << "Pilihan: ";
    cin >> arah;

    cout << "\nHasil:\n";

    // Arah 1: Kiri Atas
    if (arah == 1) {
        for (int i = t; i >= 1; i--) {
            for (int j = 1; j <= i; j++)
                cout << "+";
            cout << endl;
        }
    }

    // Arah 2: Kiri Bawah
    else if (arah == 2) {
        for (int i = 1; i <= t; i++) {
            for (int j = 1; j <= i; j++)
                cout << "+";
            cout << endl;
        }
    }

    // Arah 3: Kanan Atas
    else if (arah == 3) {
        for (int i = t; i >= 1; i--) {
            for (int s = 0; s < t - i; s++)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "+";
            cout << endl;
        }
    }

    // Arah 4: Kanan Bawah
    else if (arah == 4) {
        for (int i = 1; i <= t; i++) {
            for (int s = 0; s < t - i; s++)
                cout << " ";
            for (int j = 1; j <= i; j++)
                cout << "+";
            cout << endl;
        }
    }

    return 0;
}
