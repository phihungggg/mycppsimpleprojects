#include <iostream>
#include <list>
#include <vector>
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

cout<< "\n  nhap diem thuong ky "<<endl;
cin>>thuongky;

cout<< "\n  nhap diem giua ky "<<endl;
cin>>giuaky;

cout<< "\n nhap diem cuoi ky "<<endl;
cin>>cuoiky;

}




typedef struct datasv
{
    int tuoi ;
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

};

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
    cout << "  Ho ten : \n " << endl;

    getline(cin, data.hoten);

   // cin.ignore(); // Clear newline character

    cout << "  Que quan : \n" << endl;
    getline(cin, data.quequan);

    //cin.ignore(); // Clear newline character again

    cout << "  Dia chi : \n" << endl;
    getline(cin, data.diachi);

    cout << " Tuoi: \n"  << endl;
    cin >> data.tuoi;

    cout << "  Ma so sinh vien : \n" << endl;
    cin >> data.mssv;
}



int main()
{
    int n = 2;
    std::vector<Sinhvien*> students; // Use a vector of Sinhvien pointers

    for (int i = 0; i < n; ++i)
    {
        Sinhvien* sv = new Sinhvien(); // Allocate memory for each Sinhvien object
        cout << " \n Nhap thong tin ca nhan cua sinh vien thu " << i + 1 << endl;
        sv->nhapthongtincanhan();
        sv->nhapdiemsv();
        students.push_back(sv);

    }
   delete students[1];
students.erase(students.begin() + 1);
    for (int i = 0;i< students.size(); ++i)
    {
        students[i]->inthongtincanhan();
        students[i]->indiemsv();
    }

    // Release allocated memory



    return 0;
}
