float ball = 100;
float rot;
float rVal;
float gVal;
float bVal;
float freq = 0.000005; 
float cont = 0;
float r;

void setup() {
  size(800, 800);
}

void draw() {
  background(6, 6, 6);
  translate(400, 400);
  rotate(radians(rot));

 ellipseMode(RADIUS);
  for (int i=0; i<650; i ++) {
    ball= 120 + (i/5+60)*sin(millis()*freq*i);
    rVal=map(ball,170,80,10,230);
    gVal=map(ball,200,255,80,60);
    bVal=map(ball,30,281,170,250);
    r=map(ball,150,185,5,2);
    fill(rVal,gVal,bVal);
    noStroke();
    ellipse(ball*cos(i), ball*sin(i),r,r);
    rot = rot+0.00005;
  }
}
