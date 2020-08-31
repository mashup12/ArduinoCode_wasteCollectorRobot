void forward()
{
  if (previousstate != 2) stop1();
  analogWrite(rightf, rightspeed);
  analogWrite(leftf, leftspeed);
  previousstate = 2;
  //  Serial.println("forward");
}

