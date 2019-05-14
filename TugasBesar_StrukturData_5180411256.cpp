/*
Nama    : Bagus Ristyabudi
NIM     : 5180411256
*/
#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

int wiu,wie,wia,x,y,z,p,q,a,b,d,e,r,s;
char kata[10], temp[10];

struct Transaksi
{
    string poli;
    string pasien;
    string tgl;
    string bln;
    string thn;
};

struct Pasien
{
    string nama;
    string jk;
    string alamat;
};

struct Poli
{
    string nama;
    string dokter;
};

Poli pol[999];
Pasien psn[999];
Transaksi trn[999];

void isi_data_pasien()
{
    cout<<"Banyak data pasien yang ingin diisi : ";
    cin>>wiu;
    for (b=0;b<wiu;b++)
    {
        cout<<"Nama    : ";
        cin>>psn[a].nama;
        cout<<"Jenis Kelamin(L/P)  : ";
        cin>>psn[a].jk;
        cout<<"Alamat   : ";
        cin>>psn[a].alamat;
        cout<<"======================"<<endl;
        a++;
    }
}

void tampil_data_pasien()
{
    int c=0;
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tJENIS\t\tALAMAT"<<endl;
    cout<<"\t\t\t\tKELAMIN               "<<endl;
    cout<<"=========================================================="<<endl;
    for (x=0;x<a;x++)
    {
        c=c+1;
        cout<<c<<"\t\t"<<psn[x].nama<<"\t\t"<<psn[x].jk<<"\t\t"<<psn[x].alamat<<endl;
    }
    cout<<"=========================================================="<<endl;
}

void edit_data_pasien()
{
    int c=0;
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tJENIS\t\tALAMAT"<<endl;
    cout<<"\t\t\t\tKELAMIN               "<<endl;
    cout<<"=========================================================="<<endl;
    for (x=0;x<a;x++)
    {
        c=c+1;
        cout<<c<<"\t\t"<<psn[x].nama<<"\t\t"<<psn[x].jk<<"\t\t"<<psn[x].alamat<<endl;
    }
    cout<<"=========================================================="<<endl;
    int j;
    cout <<"Masukkan nomor data pasien yang akan diedit : ";
    cin>>j;
    x=j-1;
    cout<<"Nama    : ";
    cin>>psn[x].nama;
    cout<<"Jenis Kelamin(L/P)  : ";
    cin>>psn[x].jk;
    cout<<"Alamat   : ";
    cin>>psn[x].alamat;
    getch();
}

void hapus_data_pasien()
{
    int c=0;
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tJENIS\t\tALAMAT"<<endl;
    cout<<"\t\t\t\tKELAMIN               "<<endl;
    cout<<"=========================================================="<<endl;
    for (x=0;x<a;x++)
    {
        c=c+1;
        cout<<c<<"\t\t"<<psn[x].nama<<"\t\t"<<psn[x].jk<<"\t\t"<<psn[x].alamat<<endl;
    }
    cout<<"=========================================================="<<endl;
    int j,k,l;
    cout<<"Hapus data ke-";
    cin>>k;
    j=k-1;
    a--;
    for (l=j; l<a; l++)
    {
        psn[l]=psn[l+1];
    }
    system("cls");
    cout<<"Data ke-"<<k<<" berhasil dihapus"<<endl;
    getch();
}

void Pasien()
{
    menu:
    int pilih;
        cout<<"1. Input Data Pasien"<<endl;
        cout<<"2. Tampilkan Data Pasien"<<endl;
        cout<<"3. Edit Data Pasien"<<endl;
        cout<<"4. Hapus Data Pasien"<<endl;
        cout<<"0. Kembali"<<endl;
        cout<<"Pilih    : ";
        cin>>pilih;
        system("cls");
        switch(pilih)
        {
            case 1:isi_data_pasien();getch();system("cls");goto menu;break;
            case 2:tampil_data_pasien();getch();system("cls");goto menu;break;
            case 3:edit_data_pasien();getch();system("cls");goto menu;break;
            case 4:hapus_data_pasien();getch();system("cls");goto menu;break;
            case 0:break;
        }

}

void isi_data_poli()
{
    cout<<"Banyak data poli yang ingin diisi : ";
    cin>>wie;
    for (d=0;d<wie;d++)
    {
        cout<<"Nama Poli    : ";
        cin>>pol[e].nama;
        cout<<"Nama Dokter  : ";
        cin>>pol[e].dokter;
        cout<<"======================"<<endl;
        e++;
    }
}

void tampil_data_poli()
{
    int f=0;
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tNAMA"<<endl;
    cout<<"\t\tPOLI\t\tDOKTER             "<<endl;
    cout<<"=========================================================="<<endl;
    for (y=0;y<e;y++)
    {
        f=f+1;
        cout<<f<<"\t\t"<<pol[y].nama<<"\t\t"<<pol[y].dokter<<endl;
    }
    cout<<"=========================================================="<<endl;
}

void edit_data_poli()
{
    int f=0;
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tNAMA"<<endl;
    cout<<"\t\tPOLI\t\tDOKTER               "<<endl;
    cout<<"=========================================================="<<endl;
    for (y=0;y<e;y++)
    {
        f=f+1;
        cout<<f<<"\t\t"<<pol[y].nama<<"\t\t"<<pol[y].dokter<<endl;
    }
    cout<<"=========================================================="<<endl;
    int m;
    cout <<"Masukkan nomor data poli yang akan diedit : ";
    cin>>m;
    y=m-1;
    cout<<"Nama Poli    : ";
    cin>>pol[y].nama;
    cout<<"Nama Dokter  : ";
    cin>>pol[y].dokter;
    getch();
}

void hapus_data_poli()
{
    int f=0;
    system("cls");
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tNAMA"<<endl;
    cout<<"\t\tPOLI\t\tDOKTER               "<<endl;
    cout<<"=========================================================="<<endl;
    for (y=0;y<e;y++)
    {
        f=f+1;
        cout<<f<<"\t\t"<<pol[y].nama<<"\t\t"<<pol[y].dokter<<endl;
    }
    cout<<"=========================================================="<<endl;
    int m,n,o;
    cout<<"Hapus data ke-";
    cin>>n;
    m=n-1;
    e--;
    for (o=m; o<e; o++)
    {
        pol[o]=pol[o+1];
    }
    system("cls");
    cout<<"Data ke-"<<n<<" berhasil dihapus"<<endl;
    getch();
}

void Poli()
{
    menu:
    int pilih;
    cout<<"1. Input Data Poli"<<endl;
    cout<<"2. Tampilkan Data Poli"<<endl;
    cout<<"3. Edit Data Poli"<<endl;
    cout<<"4. Hapus Data Poli"<<endl;
    cout<<"0. Kembali"<<endl;
    cout<<"Pilih    : ";
    cin>>pilih;
    system("cls");
    switch(pilih)
    {
        case 1:isi_data_poli();getch();system("cls");goto menu;break;
        case 2:tampil_data_poli();getch();system("cls");goto menu;break;
        case 3:edit_data_poli();getch();system("cls");goto menu;break;
        case 4:hapus_data_poli();getch();system("cls");goto menu;break;
        case 0:break;
    }
}

void isi_data_transaksi()
{
    int c=0,f=0;
    cout<<"Banyak data transaksi yang ingin diisi :";
    cin>>wia;
    for (r=0; r<wia; r++)
    {
        cout<<"Masukkan tanggal [dd]    : ";
        cin>>trn[s].tgl;
        cout<<"Masukkan bulan   [mm]    : ";
        cin>>trn[s].bln;
        cout<<"Masukkan tahun   [yyyy]  : ";
        cin>>trn[s].thn;
        cout<<"======================"<<endl;
        system("cls");
        cout<<"=========================================================="<<endl;
        cout<<"NOMOR\t\tNAMA\t\tJENIS\t\tALAMAT"<<endl;
        cout<<"\t\t\t\tKELAMIN               "<<endl;
        cout<<"=========================================================="<<endl;
        for (x=0;x<a;x++)
        {
            c=c+1;
            cout<<c<<"\t\t"<<psn[x].nama<<"\t\t"<<psn[x].jk<<"\t\t"<<psn[x].alamat<<endl;
        }
        cout<<"=========================================================="<<endl;
        cout<<"Pilih data Pasien : ";
        cin>>p;

        for (x=0;x<a;x++)
        {
            if (p == x+1)
            {
                trn[s].pasien=psn[x].nama;
            }
        }

        system("cls");
        cout<<"=========================================================="<<endl;
        cout<<"NOMOR\t\tNAMA\t\tNAMA"<<endl;
        cout<<"\t\tPOLI\t\tDOKTER               "<<endl;
        cout<<"=========================================================="<<endl;
        for (y=0;y<e;y++)
        {
            f=f+1;
            cout<<f<<"\t\t"<<pol[y].nama<<"\t\t"<<pol[y].dokter<<endl;
        }
        cout<<"=========================================================="<<endl;
        cout<<"Pilih data Poli  : ";
        cin>>q;
        for (y=0;y<e;y++)
        {
            if (q == y+1)
            {
                trn[s].poli=pol[y].nama;
            }
        }
        s++;
        system("cls");
    }
}

void tampil_data_transaksi()
{
    int v=0;
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tNAMA\t\tTANGGAL"<<endl;
    cout<<"\t\tPOLI\t\tPASIEN               "<<endl;
    cout<<"=========================================================="<<endl;
    for (z=0;z<s;z++)
    {
        v=v+1;
        cout<<v<<"\t\t"<<trn[z].poli<<"\t\t"<<trn[z].pasien<<"\t\t"<<trn[z].tgl<<"/"<<trn[z].bln<<"/"<<trn[z].thn<<endl;
    }
    cout<<"=========================================================="<<endl;
}

void hapus_data_transaksi()
{
    system("cls");
    int v=0;
    cout<<"=========================================================="<<endl;
    cout<<"NOMOR\t\tNAMA\t\tNAMA\t\tTANGGAL"<<endl;
    cout<<"\t\tPOLI\t\tPASIEN               "<<endl;
    cout<<"=========================================================="<<endl;
    for (z=0;z<s;z++)
    {
        v=v+1;
        cout<<v<<"\t\t"<<trn[z].poli<<"\t\t"<<trn[z].pasien<<"\t\t"<<trn[z].tgl<<"/"<<trn[z].bln<<"/"<<trn[z].thn<<endl;
    }
    cout<<"=========================================================="<<endl;
    int g,h,i;
    cout<<"Hapus data ke-";
    cin>>h;
    g=h-1;
    s--;
    for (i=g; i<s; i++)
    {
        trn[i]=trn[i+1];
    }
    system("cls");
    cout<<"Data ke-"<<h<<" berhasil dihapus"<<endl;
    getch();
}

void Transaksi()
{
    menu:
    int pilih;
    cout<<"1. Input Data Transaksi"<<endl;
    cout<<"2. Tampilkan Data Transaksi"<<endl;
    cout<<"3. Hapus Data Transaksi"<<endl;
    cout<<"0. Kembali"<<endl;
    cout<<"Pilih    : ";
    cin>>pilih;
    system("cls");
    switch(pilih)
    {
        case 1:isi_data_transaksi();getch();system("cls");goto menu;break;
        case 2:tampil_data_transaksi();getch();system("cls");goto menu;break;
        case 3:hapus_data_transaksi();getch();system("cls");goto menu;break;
        case 0:break;
    }
}

int main()
{
    menu:
    int pilih;
    cout<<"1. Pasien"<<endl;
    cout<<"2. Poli"<<endl;
    cout<<"3. Transaksi"<<endl;
    cout<<"0. Keluar"<<endl;
    cout<<"Pilih    : ";
    cin>>pilih;
    system("cls");
    switch(pilih)
    {
        case 1:Pasien();system("cls");goto menu; break;
        case 2:Poli();system("cls");goto menu; break;
        case 3:Transaksi();system("cls"); goto menu; break;
        case 0:break;
    }
}
