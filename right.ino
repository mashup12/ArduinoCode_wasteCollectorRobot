void right()
{
  if (previousstate != 4) stop1();
  analogWrite(leftf, leftspeed);
  previousstate = 4;
  //  Serial.println("right");
}
