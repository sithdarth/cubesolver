#include<iostream>
using namespace std;

//-----------------------------------------------
char white[9];
char red[9];
char orange[9];
char blue[9];
char green[9];
char yellow[9];
//----------------------------------
char pref[6]={'b','r','g','o'};
//char sides[4]={blue[9],red[9],green[9],orange[9]};
//int counter=0;
//----------------------------------

void display(char face[9])
{
  for(int i=0;i<9;i++)
  {
    cout<<face[i]<<" ";
  }
  cout<<endl<<endl;
}

//..................................................
void solve_white_cross()
{
    for(int i=0;i<4;i++)
    {
        \\case_6--------------------
        while(1)
        {
            if(yellow[2*i]=='w' && sides[i][3]==pref[i])
            {
                rotate_clock(sides[i]);
                rotate_clock(sides[i]);
                break;
            }
            else
            {
            rotate_clock(yellow);
            }
        }
        \\case_1---------------------
        while(1)
        {

            if(white[2*i]=='w' && sides[i][7]==pref[i])
            {
                rotate_clock(sides[i]);
                rotate_clock(sides[i]);
                break;
            }
            else
            {
               rotate_clock(white);
               counter++;
            }

        }
        for(int k=0;k<4-counter;k++)
        {
            rotate_clock(white);
        }
        while(1)
        {
            rotate_clock(yellow);
            if(yellow[2*i]=='w' && sides[i][3]==pref[i])
            {
                rotate_clock(sides[i]);
                rotate_clock(sides[i]);
                break;
            }
        }
        \\case_2-----------------------
        int j=i+1;
        if(j>=4)
        {
            j=j-4;
        }
        \\case_3------------------------
        for(j=0;j<4;j++)
        {
        counter=0;
            if(sides[j][1]=='w')
            {
                while(1)
                {

                    if(sides[white][2*(j+1)]!='w')
                    {
                        break;
                    }
                    else
                    {

                    }
                }
                rotate_clock(sides[j+1]);
                for(int k=0;k<4-counter;k++)
                {
                    rotate_clock(white);
                }
            }

        }
        while(1)
        {
            rotate_clock(yellow);
            if(yellow[2*i]=='w' && sides[i][3]==pref[i])
            {
                rotate_clock(sides[i]);
                rotate_clock(sides[i]);
                break;
            }
        }

    }
}


void white_cross_cases()
{
    for(int i=0;i<4;i++)
    {
        if(white[0]=='w' && blue[7]==pref[i]){}
        else if(white[2]=='w' && red[7]==pref[i]){}
        else if(white[4]=='w' && green[7]==pref[i]){}
        else if(white[6]=='w' && orange[7]==pref[i]){}
        else if(red[1]=='w' && blue[5]==pref[i]){}
        else if(blue[1]=='w' && orange[5]==pref[i]){}
        else if(orange[1]=='w' && green[5]==pref[i]){}
        else if(green[1]=='w' && red[5]==pref[i]){}
        else if(blue[5]=='w' && red[1]==pref[i]){}
        else if(red[5]=='w' && green[1]==pref[i]){}
        else if(green[5]=='w' && orange[1]==pref[i]){}
        else if(orange[5]=='w' && blue[1]==pref[i]){}
        else if(blue[7]=='w' && white[0]==pref[i]){}
        else if(red[7]=='w' && white[2]==pref[i]){}
        else if(green[7]=='w' && white[4]==pref[i]){}
        else if(orange[7]=='w' && white[6]==pref[i]){}
        else if(blue[3]=='w' && yellow[0]==pref[i]){}
        else if(red[3]=='w' && yellow[2]==pref[i]){}
        else if(green[3]=='w' && yellow[4]==pref[i]){}
        else if(orange[3]=='w' && yellow[6]==pref[i]){}
        else if(yellow[0]=='w' && blue[3]==pref[i]){}
        else if(yellow[2]=='w' && red[3]==pref[i]){}
        else if(yellow[4]=='w' && green[3]==pref[i]){}
        else if(yellow[6]=='w' && orange[3]==pref[i]){}
    }
}
//................................................................

void rotate_clock(char choice)
{
  if (choice=='w')
  {
    int q1=white[7];
    white[7]=white[3];
    white[3]=q1;
    int q2=white[6];
    white[6]=white[4];
    white[4]=q2;
    int q3=white[0];
    white[0]=white[2];
    white[2]=q3;
    int p1=white[7];
    white[7]=white[5];
    white[5]=p1;
    int p2=white[0];
    white[0]=white[4];
    white[4]=p2;
    int p3=white[1];
    white[1]=white[3];
    white[3]=p3;

    //-------------------------
    int t1=blue[0];
    blue[0]=orange[0];
    orange[0]=t1;
    int t2=blue[7];
    blue[7]=orange[7];
    orange[7]=t2;
    int t3=blue[6];
    blue[6]=orange[6];
    orange[6]=t3;
    int t4=orange[6];
    orange[6]=green[6];
    green[6]=t4;
    int t5=orange[7];
    orange[7]=green[7];
    green[7]=t5;
    int t6=orange[0];
    orange[0]=green[0];
    green[0]=t6;
    int t7=green[6];
    green[6]=red[6];
    red[6]=t7;
    int t8=green[7];
    green[7]=red[7];
    red[7]=t8;
    int t9=green[0];
    green[0]=red[0];
    red[0]=t9;
  }
  //-------------------------

  else if(choice=='r')
  {
    int q1=red[0];
    red[0]=red[4];
    red[4]=q1;
    int q2=red[7];
    red[7]=red[5];
    red[5]=q2;
    int q3=red[1];
    red[1]=red[3];
    red[3]=q3;
    int p1=red[0];
    red[0]=red[6];
    red[6]=p1;
    int p2=red[1];
    red[1]=red[5];
    red[5]=p2;
    int p3=red[2];
    red[2]=red[4];
    red[4]=p3;
    //-------------------------
    int t1=blue[6];
    blue[6]=white[3];
    white[3]=t1;
    int t2=blue[5];
    blue[5]=white[2];
    white[2]=t2;
    int t3=blue[4];
    blue[4]=white[1];
    white[1]=t3;
    int t4=white[1];
    white[1]=green[0];
    green[0]=t4;
    int t5=white[2];
    white[2]=green[1];
    green[1]=t5;
    int t6=white[3];
    white[3]=green[2];
    green[2]=t6;
    int t7=green[0];
    green[0]=yellow[3];
    yellow[3]=t7;
    int t8=green[1];
    green[1]=yellow[2];
    yellow[2]=t8;
    int t9=green[2];
    green[2]=yellow[1];
    yellow[1]=t9;
    //--------------------------
  }
  //-----------------------------------
  else if(choice=='y')
  {
    int q1=yellow[1];
    yellow[1]=yellow[5];
    yellow[5]=q1;
    int q2=yellow[2];
    yellow[2]=yellow[4];
    yellow[4]=q2;
    int q3=yellow[0];
    yellow[0]=yellow[6];
    yellow[6]=q3;
    int p1=yellow[1];
    yellow[1]=yellow[3];
    yellow[3]=p1;
    int p2=yellow[0];
    yellow[0]=yellow[4];
    yellow[4]=p2;
    int p3=yellow[7];
    yellow[7]=yellow[5];
    yellow[5]=p3;
    //--------------------------
    int t1=blue[4];
    blue[4]=red[4];
    red[4]=t1;
    int t2=blue[3];
    blue[3]=red[3];
    red[3]=t2;
    int t3=blue[2];
    blue[2]=red[2];
    red[2]=t3;
    int t4=red[2];
    red[2]=green[2];
    green[2]=t4;
    int t5=red[3];
    red[3]=green[3];
    green[3]=t5;
    int t6=red[4];
    red[4]=green[4];
    green[4]=t6;
    int t7=green[4];
    green[4]=orange[4];
    orange[4]=t7;
    int t8=green[3];
    green[3]=orange[3];
    orange[3]=t8;
    int t9=green[2];
    green[2]=orange[2];
    orange[2]=t9;
    //--------------------------
  }
  //-------------------------------------
  else if(choice=='o')
  {
    int q1=orange[4];
    orange[4]=orange[0];
    orange[0]=q1;
    int q2=orange[3];
    orange[3]=orange[1];
    orange[1]=q2;
    int q3=orange[5];
    orange[5]=orange[7];
    orange[7]=q3;
    int p1=orange[4];
    orange[4]=orange[2];
    orange[2]=p1;
    int p2=orange[5];
    orange[5]=orange[1];
    orange[1]=p2;
    int p3=orange[6];
    orange[6]=orange[0];
    orange[0]=p3;


    //--------------------------
    int t1=blue[2];
    blue[2]=yellow[5];
    yellow[5]=t1;
    int t2=blue[1];
    blue[1]=yellow[6];
    yellow[6]=t2;
    int t3=blue[0];
    blue[0]=yellow[7];
    yellow[7]=t3;
    int t4=yellow[5];
    yellow[5]=green[6];
    green[6]=t4;
    int t5=yellow[6];
    yellow[6]=green[5];
    green[5]=t5;
    int t6=yellow[7];
    yellow[7]=green[4];
    green[4]=t6;
    int t7=green[6];
    green[6]=white[7];
    white[7]=t7;
    int t8=green[5];
    green[5]=white[6];
    white[6]=t8;
    int t9=green[4];
    green[4]=white[5];
    white[5]=t9;
    //--------------------------
  }
  //-------------------------------------
  else if(choice=='g')
  {
    int q1=green[6];
    green[6]=green[2];
    green[2]=q1;
    int q2=green[5];
    green[5]=green[3];
    green[3]=q2;
    int q3=green[7];
    green[7]=green[1];
    green[1]=q3;

    int r1=green[4];
    green[4]=green[6];
    green[6]=r1;
    int r2=green[7];
    green[7]=green[3];
    green[3]=r2;
    int r3=green[0];
    green[0]=green[2];
    green[2]=r3;
    //--------------------------
    int t1=white[5];
    white[5]=orange[2];
    orange[2]=t1;
    int t2=white[4];
    white[4]=orange[1];
    orange[1]=t2;
    int t3=white[3];
    white[3]=orange[0];
    orange[0]=t3;
    int t4=yellow[3];
    yellow[3]=orange[2];
    orange[2]=t4;
    int t5=yellow[4];
    yellow[4]=orange[1];
    orange[1]=t5;
    int t6=yellow[5];
    yellow[5]=orange[0];
    orange[0]=t6;
    int t7=yellow[3];
    yellow[3]=red[6];
    red[6]=t7;
    int t8=yellow[4];
    yellow[4]=red[5];
    red[5]=t8;
    int t9=yellow[5];
    yellow[5]=red[4];
    red[4]=t9;
    //--------------------------
  }
  //-------------------------------------------
  else if(choice=='b')
  {
    int q1=blue[1];
    blue[1]=blue[7];
    blue[7]=q1;
    int q2=blue[2];
    blue[2]=blue[6];
    blue[6]=q2;
    int q3=blue[5];
    blue[5]=blue[3];
    blue[3]=q3;

    int r1=blue[2];
    blue[2]=blue[0];
    blue[0]=r1;
    int r2=blue[7];
    blue[7]=blue[3];
    blue[3]=r2;
    int r3=blue[6];
    blue[6]=blue[4];
    blue[4]=r3;
    //--------------------------
    int t1=yellow[1];
    yellow[1]=orange[4];
    orange[4]=t1;
    int t2=yellow[0];
    yellow[0]=orange[5];
    orange[5]=t2;
    int t3=yellow[7];
    yellow[7]=orange[6];
    orange[6]=t3;
    int t4=white[7];
    white[7]=orange[4];
    orange[4]=t4;
    int t5=white[0];
    white[0]=orange[5];
    orange[5]=t5;
    int t6=white[1];
    white[1]=orange[6];
    orange[6]=t6;
    int t7=white[7];
    white[7]=red[0];
    red[0]=t7;
    int t8=white[0];
    white[0]=red[1];
    red[1]=t8;
    int t9=white[1];
    white[1]=red[2];
    red[2]=t9;
    //--------------------------
  }
  //------------------------------------------

}




int main()
{
  cout<<"Input :"<<endl<<endl;
  cout<<"White Side : ";
  for(int i=0;i<9;++i)
  {
    cin>>white[i];
  }
  cout<<"Red Side : ";
  for(int i=0;i<9;++i)
  {
    cin>>red[i];
  }
  cout<<"Orange Side : ";
  for(int i=0;i<9;++i)
  {
    cin>>orange[i];
  }
  cout<<"Blue Side : ";
  for(int i=0;i<9;++i)
  {
    cin>>blue[i];
  }
  cout<<"Green Side : ";
  for(int i=0;i<9;++i)
  {
    cin>>green[i];
  }
  cout<<"Yellow Side : ";
  for(int i=0;i<9;++i)
  {
    cin>>yellow[i];
  }
  //--------------------------
  rotate_clock('w');
  rotate_clock('r');
  rotate_clock('o');
  rotate_clock('b');
  rotate_clock('g');
  rotate_clock('y');

  cout<<"Output : "<<endl<<endl;
  display(white);
  display(red);
  display(orange);
  display(blue);
  display(green);
  display(yellow);
  return 0;
}
