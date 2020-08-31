void follow()
{
  if (a == 'f') forward();
  else if (a == 'b') back();
  else if (a == 'r') right();
  else if (a == 'l') left();
  else if (a == 'u') servoup();
  else if (a == 'd') servodown();
  else if (a == 's') stop1();
  else if(a== 'c')
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
  }
  else if(a== 'w')
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
  }
  else stop1();

  Serial.println(a);
}

