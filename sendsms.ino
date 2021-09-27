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
  //send SMS with text "Message"
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
//add code to loop
}
