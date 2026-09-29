class Karyawan:
    def __init__(self, nama: str, jabatan: str, jam_lembur: int, dinas_luar: int, presensi: int):
        self.nama = nama
        self.jabatan = jabatan.strip().lower()
        self.jam_lembur = jam_lembur
        self.dinas_luar = dinas_luar
        self.presensi = presensi

    def get_gaji_pokok(self) -> int:
        if self.jabatan in ["teknisi", "1"]:
            return 1800000
        elif self.jabatan in ["rnd", "r&d", "2"]:
            return 2300000
        elif self.jabatan in ["kepala divisi", "kadiv", "3"]:
            return 2700000
        return 0

    def get_uang_lembur(self) -> int:
        return self.jam_lembur * 20000

    def get_tunjangan_dinas_luar(self) -> int:
        return self.dinas_luar * 400000

    def get_uang_presensi(self) -> int:
        return self.presensi * 50000

    def hitung_total_gaji(self) -> int:
        return (
            self.get_gaji_pokok()
            + self.get_uang_lembur()
            + self.get_tunjangan_dinas_luar()
            + self.get_uang_presensi()
        )

    def tampilkan_output(self):
        print("\n========================================")
        print(f"Nama Karyawan      : {self.nama}")
        print(f"Jumlah Presensi    : {self.presensi}")
        print(f"Jumlah Dinas Luar  : {self.dinas_luar}")
        print(f"Total jumlah Gaji  : Rp {self.hitung_total_gaji()}")
        print("========================================")


def main():
    print("=== Input Data Karyawan ===")
    nama = input("Nama Karyawan            : ")
    jabatan = input("Jabatan (Teknisi / RnD / Kepala Divisi): ")
    jam_lembur = int(input("Jam Lembur               : "))
    dinas_luar = int(input("Jumlah Dinas Luar        : "))
    presensi = int(input("Jumlah Presensi Kehadiran: "))

    karyawan = Karyawan(nama, jabatan, jam_lembur, dinas_luar, presensi)
    karyawan.tampilkan_output()


if __name__ == "__main__":
    main()
