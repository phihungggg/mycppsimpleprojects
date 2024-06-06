#include <iostream>

using namespace std;
/*      Có 20 ô ,mỗi ô có thể nuôi một con chó hoặc một con mèo
    -Nhập một con vật mới mua vào ô rỗng đầu tiên
    -Xuất(đem bán) một con.
    -Thống kê các con vật đang nuôi trong 20 ô


*/


class Animal
{
protected:
    string name;

public:
    virtual void xuatten()=0;





};


class Cat :public Animal
{
public:
    void xuatten()
    {


    }


}
