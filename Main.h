int a;
/*    临时变量    */
#define GT __DATE__
/*    游戏日期	*/
#define GD __TIME__
/*    游戏时间	*/
int ElementalEnergy = 0;
#define ELE ElementalEnergy;
/*    元素能量	*/
int RoundCount = 0;
#define RoundC RoundCount;
/*    回合计数	*/
int ElementalDice_Your = 0;//我方骰子
int ElementalDice_TheOtherSide = 0;//对方骰子
#define ED_1 ElementalDice_Your;
#define ED_2 ElementalDice_TheOtherSide;
/*    元素骰子	*/
int RoundEnd = 0;
/*
回合状态
0:骰子投掷中;
1:我方回合进行中;
2:我方回合结束;
3:对方回合进行中;
4:对方回合结束;
5:结束阶段;
*/