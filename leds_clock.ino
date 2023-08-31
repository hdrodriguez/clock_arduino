
#define a 3
#define b 4
#define c 5
#define d 6
#define e 9
#define f 10
#define g 11

int nums[][5][7] = {
      {
        {1,1,1,1,1,1,1}, {1,0,0,0,0,0,1}, {1,0,0,0,0,0,1}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0} //0
      },
      {
        {0,0,0,0,0,0,0}, {1,0,0,0,0,0,0}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0}, {0,0,0,0,0,0,0} //1
      },
      {
        {1,0,0,1,1,1,1}, {1,0,0,1,1,1,1}, {1,0,0,1,1,1,1}, {1,1,1,1,0,0,1}, {0,0,0,0,0,0,0} //2
      },
      {
        {1,0,0,1,0,0,1}, {1,0,0,1,0,0,1}, {1,0,0,1,0,0,1}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0} //3
      },
      {
        {1,1,1,1,0,0,0}, {0,0,0,1,0,0,0}, {0,0,0,1,0,0,0}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0} //4
      },
      {
        {1,1,1,1,0,0,1}, {1,1,1,1,0,0,1}, {1,1,1,1,0,0,1}, {1,0,0,1,1,1,1}, {0,0,0,0,0,0,0} //5
      },
      {
        {1,1,1,1,1,1,1}, {1,0,0,1,0,0,1}, {1,0,0,1,0,0,1}, {1,0,0,1,1,1,1}, {0,0,0,0,0,0,0} //6
      },
      {
        {1,0,0,0,0,0,0}, {1,0,0,0,0,0,0}, {1,0,0,0,0,0,0}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0} //7
      },
      {
        {1,1,1,1,1,1,1}, {1,0,0,1,0,0,1}, {1,0,0,1,0,0,1}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0} //8
      },
      {
        {1,1,1,1,0,0,0}, {1,0,0,1,0,0,0}, {1,0,0,1,0,0,0}, {1,1,1,1,1,1,1}, {0,0,0,0,0,0,0} //9
      }
  };

int hz = 0;




void draw(int num[5][7])
{
  hz = 30;
  for(int i = 0; i<=4; i++)
    {
      
      for(int j = 0; j<=6; j++)
      {
       
        if(j == 0)
        {
          digitalWrite(a, num[i][j]);
        }

        if(j == 1)
        {
          digitalWrite(b, num[i][j]);
        }

        if(j == 2)
        {
          digitalWrite(c, num[i][j]);
        }

        if(j == 3)
        {
          digitalWrite(d, num[i][j]);
        }

        if(j == 4)
        {
          digitalWrite(e, num[i][j]);
        }

        if(j == 5)
        {
          digitalWrite(f, num[i][j]);
        }

        if(j == 6)
        {
          digitalWrite(g, num[i][j]);
        }
      }
      delay(hz);
    }

    

}

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int imax = sizeof(nums)/sizeof(nums[0]);
  for(int k = 0; k<imax; k++)
  {
    draw(nums[k]);
  }
  
  

}
