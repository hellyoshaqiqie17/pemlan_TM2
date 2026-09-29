#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Karyawan {
private:
    string nama;
    string jabatan;
    int jamLembur;
    int dinasLuar;
    int presensi;

    string toLower(string str) const {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }

public:
    Karyawan(string n, string j, int lembur, int dl, int pres)
        : nama(n), jabatan(j), jamLembur(lembur), dinasLuar(dl), presensi(pres) {}

    long long getGajiPokok() const {
        string j = toLower(jabatan);
        if (j == "teknisi" || j == "1") {
            return 1800000;
        } else if (j == "rnd" || j == "r&d" || j == "2") {
            return 2300000;
        } else if (j == "kepala divisi" || j == "kadiv" || j == "3") {
            return 2700000;
        }
        return 0;
    }

    long long getUangLembur() const {
        return (long long)jamLembur * 20000;
    }

    long long getTunjanganDinasLuar() const {
        return (long long)dinasLuar * 400000;
    }

    long long getUangPresensi() const {
        return (long long)presensi * 50000;
    }

    long long hitungTotalGaji() const {
        return getGajiPokok() + getUangLembur() + getTunjanganDinasLuar() + getUangPresensi();
    }

    void tampilkanOutput() const {
        cout << "\n========================================\n";
        cout << "Nama Karyawan      : " << nama << "\n";
        cout << "Jumlah Presensi    : " << presensi << "\n";
        cout << "Jumlah Dinas Luar  : " << dinasLuar << "\n";
        cout << "Total jumlah Gaji  : Rp " << hitungTotalGaji() << "\n";
        cout << "========================================\n";
    }
};

int main() {
    string nama, jabatan;
    int jamLembur, dinasLuar, presensi;

    cout << "=== Input Data Karyawan ===\n";
    cout << "Nama Karyawan            : ";
    getline(cin, nama);

    cout << "Jabatan (Teknisi / RnD / Kepala Divisi): ";
    getline(cin, jabatan);

    cout << "Jam Lembur               : ";
    cin >> jamLembur;

    cout << "Jumlah Dinas Luar        : ";
    cin >> dinasLuar;

    cout << "Jumlah Presensi Kehadiran: ";
    cin >> presensi;

    Karyawan karyawan(nama, jabatan, jamLembur, dinasLuar, presensi);
    karyawan.tampilkanOutput();

    return 0;
}
