#include <LGSM.h>

const char* contact_no = "+37212345678";  // the number you will call


void setup()
{
  // initialize serial communications
  Serial.begin(9600);
  Serial.println("Initialize GSM for SMS");
    while (!LSMS.ready()){
      delay(1000);
      Serial.println(".");
    }
  Serial.println("GSM ready for sending SMS");
  
  LSMS.beginSMS(contact_no);
  LSMS.print("Message");
  if (LSMS.endSMS()){
    Serial.println("SMS succesfully sent");
    }
  else{
    Serial.println("SMS failed to send");
    }
}

void loop()
{
while (LSMS.ready())
  {
    int v = c.read();
    if (v != -1)
    {
      Serial.print((char)v);
    }
    else
    {
      Serial.println("SMS sent");
      c.stop();
      while (1)
      {
        delay(1);
      }
    }
  }
}
