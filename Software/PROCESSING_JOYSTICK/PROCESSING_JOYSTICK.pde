import processing.serial.*; //import the Serial library
Serial myPort;

int x; // variable holding the value from A0
int y; // variable holding the value from A1
int b; // variable holding the value from digital pin 2
PFont f; // define the font variable
String portName;
String val;

void setup()
{
  size ( 512 , 512 ) ; // window size
  
  // we are opening the port
   // text(Serial.list());

   myPort = new Serial(this, Serial.list()[0], 9600);
  myPort.bufferUntil('\n'); 
  
  // choose the font and size
  f = createFont("Arial", 16, true); // Arial, 16px, anti-aliasing
  textFont ( f, 16 ) ; // size 16px
}

// drawing loop
void draw()
{
  fill(0) ; // set the fill color to black
  clear() ; // clean the screen
  
  fill(255) ; // set the fill color to white
  
  if (b == 1) // check if the button is pressed
  {
    // draw a larger circle with specified coordinates
    ellipse(x/2,y/2, 50, 50);
  } 
  else
  {
    // we draw a circle with a certain coordinates
    ellipse(x/2,y/2, 25, 25);
  }
  
  // we display data
  text("AnalogX="+(1023-x)+" AnalogY="+(1023-y),10,20);
}


// data support from the serial port
void serialEvent( Serial myPort) 
{
  // read the data until the newline n appears
  val = myPort.readStringUntil('\n');
  
  if (val != null)
  {
        val = trim(val);
        
    // break up the decimal and new line reading
    int[] vals = int(splitTokens(val, ","));
    
    // we assign to variables
    x = vals[0];
    y = vals[1] ;
    b = vals[2];

  }
}
