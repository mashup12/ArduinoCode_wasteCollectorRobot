void servoup()
{
  while(pos!=100)
  {
    pos=pos-1;
    myservo.write(pos);
    delay(15);
  }
//  Serial.println("up");
}

