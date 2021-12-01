void Pos(int x, int y)
{
  COORD pos;
  pos.X=x;
  pos.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
  }
  
void HideCursor()
{
  CONSOLE_CURSOR_INFO cursor_info ={1,0};
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
