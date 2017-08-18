import processing.serial.*;


Serial x;

void setup()
{
size(640,480);
x=new Serial(this,"COM4",9600);
}

void draw()
{
if(x.available()>0)
{
  
int z=x.read();
println(z);
if(z>50)
{
String a="0";
String[] b=split(a," ");
saveStrings("file.txt",b);
 
}
if(z>20)
{
String a="1";
String[] b=split(a," ");
saveStrings("file.txt",b);
 
}

}
}