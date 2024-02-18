
long t=0,d=0;
int trig =1;
int echo =2;

void setup()
{
  for (int i=3;i<=6;i++){
  
  pinMode(i,1);
  }
    
  
  pinMode(trig,1);
  pinMode(echo,0);
  
  
}

void loop()
{
  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  t=pulseIn(echo,1);
  d=(0.0343/2)*t;
  
  
  if (d>=50 && d<130){
  digitalWrite(3,1);
  
  }else if (d>=130 && d<220){
    
    digitalWrite(4,1);
  }
  else if (d>=220 && d<330){
  digitalWrite(5,1);
    
  }
  else if(d>=330){
  
  digitalWrite(6,1);
  }
  
  
  
}