void left()
{
  if (previousstate != 3) stop1();
  analogWrite(rightf, rightspeed);

  previousstate = 3;
  //  Serial.println("left");
}
