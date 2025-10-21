#include <iostream>
using namespace std;

string getZodiak(int tanggal, int bulan) {
    int maxH;

    if (bulan < 1 || bulan > 12) {
        return "Nguwawor (bulan alien mungkin)";
    }

    if (bulan == 2) {
        maxH = 29;
    } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        maxH = 30;
    } else {
        maxH = 31;
    }

    if (tanggal < 1 || tanggal > maxH) {
        return "Tanggal gak valid, mungkin kamu lahir di semesta lain.";
    }

    if ((bulan == 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19))
        return "Aries";
    else if ((bulan == 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20))
        return "Taurus";
    else if ((bulan == 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20))
        return "Gemini";
    else if ((bulan == 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22))
        return "Cancer";
    else if ((bulan == 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22))
        return "Leo";
    else if ((bulan == 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22))
        return "Virgo";
    else if ((bulan == 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22))
        return "Libra";
    else if ((bulan == 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 21))
        return "Scorpio";
    else if ((bulan == 11 && tanggal >= 22) || (bulan == 12 && tanggal <= 21))
        return "Sagitarius";
    else if ((bulan == 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19))
        return "Capricorn";
    else if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18))
        return "Aquarius";
    else if ((bulan == 2 && tanggal >= 19) || (bulan == 3 && tanggal <= 20))
        return "Pisces";

    return "Zodiak misterius (developer lagi males)";
}

string getKata(string zodiak) {
    if (zodiak == "Aries") return "Aries: semangat terus, meski kadang dompet udah bilang ‘udah cukup dek’.";
    else if (zodiak == "Taurus") return "Taurus: keras kepala, tapi soal makanan nggak pernah nolak traktiran.";
    else if (zodiak == "Gemini") return "Gemini: suka ngomong banyak, kadang bingung mana versi asli mana cadangan.";
    else if (zodiak == "Cancer") return "Cancer: hatinya lembut, gampang tersentuh... apalagi kalo liat diskon 90%.";
    else if (zodiak == "Leo") return "Leo: percaya diri tingkat dewa, tapi kadang cermin nggak setuju.";
    else if (zodiak == "Virgo") return "Virgo: perfeksionis, nyusun playlist aja bisa 3 jam sendiri.";
    else if (zodiak == "Libra") return "Libra: adil katanya, tapi kalau pilih tempat makan butuh waktu 2 tahun.";
    else if (zodiak == "Scorpio") return "Scorpio: misterius, sering tiba-tiba ilang, padahal cuma tidur siang.";
    else if (zodiak == "Sagitarius") return "Sagitarius: suka jalan-jalan, tapi uangnya suka jalan duluan.";
    else if (zodiak == "Capricorn") return "Capricorn: rajin kerja, katanya... tapi lebih rajin scroll TikTok.";
    else if (zodiak == "Aquarius") return "Aquarius: pikirannya jauh ke depan, padahal tugas minggu lalu belum kelar.";
    else if (zodiak == "Pisces") return "Pisces: romantis banget, sayang sering jatuh cinta sama yang nggak balas chat.";
    return "Quotes tidak ditemukan, coba lagi di patch berikutnya.";
}

int main() {
    int tanggal, bulan;

    cout <<"CEK RASI BINTANG \n";
    cout << "Masukkan tanggal lahir: ";
    cin >> tanggal;
    cout << "Masukkan bulan lahir (1-12): ";
    cin >> bulan;


    string zodiak = getZodiak(tanggal, bulan);
    cout << "\nTanggal lahir kamu: " << tanggal << "-" << bulan << endl;
    cout << "Zodiak kamu adalah: " << zodiak << endl;
    cout << "Quotes buat kamu: " << getKata(zodiak) << endl;

    return 0;
}
