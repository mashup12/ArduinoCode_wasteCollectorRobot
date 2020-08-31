void servodown()
{
  while(pos!=160)
  {
    pos=pos+1;
    myservo.write(pos);
    delay(15);
  }
//  Serial.println("down");
}

