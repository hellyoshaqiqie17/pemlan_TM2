# pemlan_TM2 - Sistem Payroll

## Flowchart

```mermaid
flowchart TD
    Start([Mulai]) --> InputData[/Input: Nama Karyawan, Jabatan, Jam Lembur, Dinas Luar, Presensi Kehadiran/]
    InputData --> InitObj[Inisialisasi Object Karyawan]
    InitObj --> CheckJabatan{Cek Jabatan}
    CheckJabatan -- "Teknisi" --> Gaji1[Gaji Pokok = 1.800.000]
    CheckJabatan -- "RnD" --> Gaji2[Gaji Pokok = 2.300.000]
    CheckJabatan -- "Kepala Divisi" --> Gaji3[Gaji Pokok = 2.700.000]
    Gaji1 --> HitungLain
    Gaji2 --> HitungLain
    Gaji3 --> HitungLain
    HitungLain[Hitung: <br>• Uang Lembur = Jam Lembur × 20.000 <br>• Tunjangan Dinas Luar = Jumlah Dinas Luar × 400.000 <br>• Uang Presensi = Presensi Kehadiran × 50.000]
    HitungLain --> HitungTotal[Total Gaji = Gaji Pokok + Uang Lembur + Tunjangan Dinas Luar + Uang Presensi]
    HitungTotal --> Output[/Output: Nama Karyawan, Jumlah Presensi, Jumlah Dinas Luar, Total jumlah Gaji/]
    Output --> Selesai([Selesai])
```

## Output Program

### Contoh Input:
```text
=== Input Data Karyawan ===
Nama Karyawan            : Budi Santoso
Jabatan (Teknisi / RnD / Kepala Divisi): RnD
Jam Lembur               : 10
Jumlah Dinas Luar        : 2
Jumlah Presensi Kehadiran: 20
```

### Output:
```text
========================================
Nama Karyawan      : Budi Santoso
Jumlah Presensi    : 20
Jumlah Dinas Luar  : 2
Total jumlah Gaji  : Rp 4300000
========================================
```
