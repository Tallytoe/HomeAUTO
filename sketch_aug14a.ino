String readString;

void setup()

{



Serial1.begin(38400);


pinMode(11, OUTPUT);
}

void loop()
 {
  


while(Serial1.available())


{
  
delay(4);

char c = Serial1.read();

readString+=c;

}

if(readString.length() >0)

{
  
Serial1.println(readString);
  
if(readString == "on")
  
{
  
digitalWrite(11, HIGH);
  
}
 
else if(readString == "off")
  
{
  
digitalWrite(11, LOW);
 
}
 
 

  readString = "";

}

}

