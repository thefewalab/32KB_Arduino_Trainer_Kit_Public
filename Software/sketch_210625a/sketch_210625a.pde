import processing.serial.*;
Serial port;

float brightness=0;

void setup(){

size(800,600);

port=new Serial(this, "COM1", 9600);
port.bufferUntil('\n');
}

void draw(){
background(0,0, brightness);

}

void serialEvent(Serial port){
brightness=float(port.readStringUntil('\n'));
}
