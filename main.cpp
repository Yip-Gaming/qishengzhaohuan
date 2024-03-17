#include <iostream>
#include <fstream>
#include "Role.h"
#include "Main.h"
#include "User.h"
using namespace std;
int main()
{
    cout << "游戏开始时间:" << " " << GD << " " << GT << endl;
    cout << "选择你的角色:" << endl;
    for(a=0; a<71; a++)
    {
        cout<<RoleCard[a]<<endl;
    }
    return 0;
}