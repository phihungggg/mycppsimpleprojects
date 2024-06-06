
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Monhoc
{

private:
    int thuongky;
    int giuaky;
    int cuoiky;

    int sotinchi;
public:
    void nhapdiem();

    void indiem();
};

void Monhoc::indiem()
{

     cout<<" \n Diem thuong ky "<<thuongky<<endl;
    cout<<" \n Diem giua ky "<<giuaky<<endl;
    cout<<" \n Diem cuoi ky "<<cuoiky<<endl;
    cout<<" \n Diem tong ket" << thuongky*0.2 + giuaky*0.3 +cuoiky*0.5 <<endl;


}



void Monhoc::nhapdiem(){
cout<<"\n Nhap so tin chi : " <<endl;
cin>>sotinchi;
cin.ignore(1);


cout<< "\n  nhap diem thuong ky "<<endl;
cin>>thuongky;
cin.ignore(1);

cout<< "\n  nhap diem giua ky "<<endl;
cin>>giuaky;
cin.ignore(1);

cout<< "\n nhap diem cuoi ky "<<endl;
cin>>cuoiky;
cin.ignore(1);

}






typedef struct datasv
{
    string tuoi;
    Monhoc ctdlgt;
    Monhoc lthdt;
    Monhoc nmlt;
    string hoten;
    string quequan;
    string diachi;
    string mssv;

}datasv;

class Sinhvien
{

private:
    datasv data;
public:
    void nhapdiemsv();
    void nhapthongtincanhan();
    void inthongtincanhan();
    void indiemsv();
    string getfirstname();
    int lookingfor (string lookingname);

    void nhapthongtincanhan(string dulieu,int i)
    {
        if(i==1)
        data.hoten=dulieu;
        if(i==2)
        data.quequan=dulieu;
        if(i==3)
        data.tuoi=dulieu;
        if(i==4)
        data.mssv=dulieu;
        if(i==5)
        data.diachi=dulieu;
    }



    void nhapthongtincanhan(int dtk,int dgk,int dck,string mon)
    { if (mon=="ctdlgt")
    data.ctdlgt.nhapdiem();
        if (mon=="lthdt")
            data.lthdt.nhapdiem();
        if(mon=="nmlt")
            data.nmlt.nhapdiem();

    }
   string getname() const
    {
        return data.hoten;
    }
};

int Sinhvien::lookingfor(string lookingname) {

    if (lookingname == data.hoten)
        return 1;
    return 0;
}
void Sinhvien::inthongtincanhan()
{
    cout<<" \n Ho ten: " <<endl;
    cout<<data.hoten<<endl;

    cout<<" \n Que quan " <<endl;
    cout<<data.quequan<<endl;

    cout<<" \n Dia chi : " <<endl;
    cout<<data.diachi<<endl;

     cout<<" \n MSSV : " <<endl;
    cout<<data.mssv<<endl;
}
void Sinhvien::indiemsv()
{   cout<<" \n Diem mon cau truc du lieu giai thuat " ;
    data.ctdlgt.indiem();

     cout<<" \n Diem mon lap trinh huong doi tuong " ;
    data.lthdt.indiem();

     cout<<" \n Diem mon nhap mon lap trinh " ;
    data.nmlt.indiem();
}

string layChuCaiCuoiCung(const string& ten) {
    size_t viTriDauCachCuoi = ten.find_last_of(' ');
    if (viTriDauCachCuoi != string::npos) {

        return ten.substr(viTriDauCachCuoi + 1);
    } else {

        return ten;
    }
}
string Sinhvien::getfirstname()
{
        return layChuCaiCuoiCung(data.hoten);



}


void Sinhvien::nhapdiemsv()
{   cout<<" \n Nhap diem mon cau truc du lieu giai thuat "<<endl;
    data.ctdlgt.nhapdiem();
    cout<<" \n Nhap diem mon nhap mon lap trinh "<<endl;
    data.nmlt.nhapdiem();
    cout<<" \n Nhap diem mon lap trinh huong doi tuong" <<endl;
    data.lthdt.nhapdiem();

}

void Sinhvien::nhapthongtincanhan()
{
    cout << "  Ho ten :  " << endl;
  getline(cin, data.hoten);


    cout << "  Que quan : " << endl;
    getline(cin, data.quequan);

    cout << "  Dia chi : " << endl;
    getline(cin, data.diachi);

    cout << " Tuoi: \n"  << endl;
    getline(cin, data.tuoi);

    cout << "  Ma so sinh vien : \n" << endl;
    cin >> data.mssv;
    cin.ignore(1);}


 void interchangeSort(std::vector<Sinhvien*> &students) {
    int n = students.size();
     Sinhvien *temp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(students[i]->getfirstname()>students[j]->getfirstname())
            {
                temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
            }
        }
    }




int main()
{   int i,n,index,z,choice;
    int kiemtra=0;
    int o=0;
    char check,check2,choice2;
    string name,hoten,diachi,quequan,mssv,tuoi;
    Sinhvien sv;
    std::vector<Sinhvien*> students;


        do

    {cout<< " \n Nhan cac phim sau de thuc hien hanh dong mong muon : \n 1) nhap danh sach sinh vien  \n 2) xuat danh sach sinh vien  \n 3) Sua thong tin sinh vien \n 4) Xoa sinh vien  \n 5) Them sinh vien moi vao danh sach  \n 6) Sap xep danh sach sinh vien  \n 7) Tim kiem sinh vien \n 8) Ket thuc chuong trinh  " <<endl ;
         cout<<"\n Moi nhap lua chon : " <<endl;
    cin>>i ;
    cin.ignore();
    while (i>9 ||i<1)
    {
        cout<< " Moi nhap lai"<< endl;
        cin>>i;
        cin.ignore();
        if ( i>1 &&i<9)
            break;
    }
    switch (i){
        case 1:
            //cout<< " \n Nhap so luong sinh vien mong muon: " << endl;
            //cin>>n;
            cout<< " \n Nhap danh sach sinh vien " << endl;
            do{
                Sinhvien* sv = new Sinhvien();
                cout << " \n Nhap thong tin ca nhan cua sinh vien thu " << o + 1 << endl;
                sv->nhapthongtincanhan();
                sv->nhapdiemsv();
                students.push_back(sv);
                cout<< "\n Co muon nhap them sinh vien  khong ? (y/n)"<<endl;
                scanf(" %c",&check);
                getchar();
                o++;
            }while(check=='y');


            break;
        case 2:
              for (int i = 0;i< students.size(); ++i)
        {
        students[i]->inthongtincanhan();
        students[i]->indiemsv();
        }
            if (students.empty())
            cout<<" Danh sach sv rong \n" ;
            break;

       case 3:
    int check3;
    cout<< "\n Lua chon thong tin muon sua doi: \n 1: Thong tin ca nhan \n 2: Diem so  \n   ";
    cin>>check3;
    cin.ignore();



    cout << " \n Moi nhap ten sinh vien muon sua doi thong tin : "<<endl;  //need more adjustment
    getline(cin, name);

    for (int i = 0; i < students.size(); ++i) {
        students[i]->lookingfor(name);

        if (students[i]->lookingfor(name) == 1)
           {

           kiemtra = 1;
           if (check3==1)
           students[i]->nhapthongtincanhan();
           else
                students[i]->nhapdiemsv();

           break;
           }

    }

    if (kiemtra == 0) {
        cout << " Khong co ten sinh vien muon sua doi . " << endl;
    }
    break;

       case 4:
    if (students.empty())
            cout<<" Danh sach sv rong \n" ;
            else
            {


    cout << " \n Moi nhap ten sinh vien muon xoa khoi danh sach : ";
    getline(cin, name);
    for (int i = 0; i < students.size(); ++i) {
        students[i]->lookingfor(name);

        if (students[i]->lookingfor(name) == 1) {
            delete students[i];
            students.erase(students.begin() + i);
            cout << "Da xoa sinh vien co ten: " << name << endl;
            --i;
            kiemtra = 1;
            break;
        }
    }

    if (kiemtra == 0) {
        cout << " Khong co ten sinh vien muon xoa." << endl;
    }
            }
    break;
       case 5:
        break;

       case 6:
        cout<< "\n Sap xep theo ten ";
        interchangeSort(students);
        break;

       case 7:
           int kiemtra1=0;
        cout<<"\n Nhap ten sv muon tim " << endl;
        getline(cin,name);

          for (int i = 0; i < students.size(); ++i) {
        students[i]->lookingfor(name);

        if (students[i]->lookingfor(name) == 1) {

            cout<<"\n Tim thay ten sinh vien "<<name<<endl;

            kiemtra1 = 1;
            break;
        }
    }
        if (kiemtra1==0)
            cout<<"\n Khong co ten sinh vien . " <<endl;
            break;


       // default:
           // break;
    }
    cout<<"\n ban co muon nhap them thao tac nao o menu khong ? (c/k)" <<endl;
    scanf(" %c",&check2);
    getchar();
    while(check2!='c'&&check2!='k')
    {
        cout<< "\n Thao tac sai, Moi nhap lai \n Bap them thao tac nao o menu khong ? (c/k) \n" ;
        scanf(" %c",&check2);
    getchar();
    }
}while(check2=='c');


}





