#ifndef SEATS_2H
#define SEATS_2H
class seats
{
private:
  int Seat_num;
  
  int a, b;
  int lowerclass_seatnum[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
  int lowerclass_temp[5][4];
  int upperclass_seatnum[5][4] =  {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
  int upperclass_temp[5][4];
  int lowerclass2_seatnum[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
  int lowerclass2_temp[5][4];



public:
  void lowerclass(int, int, int);
  void upperclass(int, int, int);
  void lowerclass2(int, int, int);
 void seating();
  int getdata(int) { return seats::Seat_num; }
  void setdata(int num) { seats::Seat_num = num; }
};

#endif
