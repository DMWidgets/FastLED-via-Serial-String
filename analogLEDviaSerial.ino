#include <FastLED.h>
#define REDPIN   13
#define GREENPIN 12
#define BLUEPIN  14

// This function takes the incoming RGB values and outputs the values
// on three analog PWM output pins to the r, g, and b values respectively.
void showAnalogRGB( const CRGB& rgb)
{
  analogWrite(REDPIN,   rgb.r );
  analogWrite(GREENPIN, rgb.g );
  analogWrite(BLUEPIN,  rgb.b );
}

// colorBars: flashes Red, then Green, then Blue, then Black.
// Helpful for diagnosing if you've mis-wired which is which.
void colorBars()
{
  showAnalogRGB( CRGB::Red );   delay(500);
  showAnalogRGB( CRGB::Green ); delay(500);
  showAnalogRGB( CRGB::Blue );  delay(500);
  showAnalogRGB( CRGB::Black ); delay(500);
}

void setup() {
  pinMode(REDPIN,   OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN,  OUTPUT);
  //sets color correction for your LED: 
  //(TypicalSMD5050, TypicalLEDStrip, Typical8mmPixel,TypicalPixelString,UncorrectedColor)
  FastLED.setCorrection('typicalSMD5050');
  Serial.begin(115200);  
  colorBars();
}

void loop(){
  String color = "";
  char character;
  
 while(Serial.available()){
    character = Serial.read();
    color.concat(character);
    color.trim();
    delay(20);
    //Serial.printlnln(color);
  }
  
if(color == "AliceBlue")
    {
    showAnalogRGB(CRGB::AliceBlue);
    Serial.println("AliceBlue");
    return;
}

else if(color == "Amethyst")
    {
    showAnalogRGB(CRGB::Amethyst);
    Serial.println("Amethyst");
    return;
}

else if(color == "AntiqueWhite")
    {
    showAnalogRGB(CRGB::AntiqueWhite);
    Serial.println("AntiqueWhite");
    return;
}

else if(color == "Aqua")
    {
    showAnalogRGB(CRGB::Aqua);
    Serial.println("Aqua");
    return;
}

else if(color == "Aquamarine")
    {
    showAnalogRGB(CRGB::Aquamarine);
    Serial.println("Aquamarine");
    return;
}

else if(color == "Azure")
    {
    showAnalogRGB(CRGB::Azure);
    Serial.println("Azure");
    return;
}

else if(color == "Beige")
    {
    showAnalogRGB(CRGB::Beige);
    Serial.println("Beige");
    return;
}

else if(color == "Bisque")
    {
    showAnalogRGB(CRGB::Bisque);
    Serial.println("Bisque");
    return;
}

else if(color == "Black")
    {
    showAnalogRGB(CRGB::Black);
    Serial.println("Black");
    return;
}

else if(color == "BlanchedAlmond")
    {
    showAnalogRGB(CRGB::BlanchedAlmond);
    Serial.println("BlanchedAlmond");
    return;
}

else if(color == "Blue")
    {
    showAnalogRGB(CRGB::Blue);
    Serial.println("Blue");
    return;
}

else if(color == "BlueViolet")
    {
    showAnalogRGB(CRGB::BlueViolet);
    Serial.println("BlueViolet");
    return;
}

else if(color == "Brown")
    {
    showAnalogRGB(CRGB::Brown);
    Serial.println("Brown");
    return;
}

else if(color == "BurlyWood")
    {
    showAnalogRGB(CRGB::BurlyWood);
    Serial.println("BurlyWood");
    return;
}

else if(color == "CadetBlue")
    {
    showAnalogRGB(CRGB::CadetBlue);
    Serial.println("CadetBlue");
    return;
}

else if(color == "Chartreuse")
    {
    showAnalogRGB(CRGB::Chartreuse);
    Serial.println("Chartreuse");
    return;
}

else if(color == "Chocolate")
    {
    showAnalogRGB(CRGB::Chocolate);
    Serial.println("Chocolate");
    return;
}

else if(color == "Coral")
    {
    showAnalogRGB(CRGB::Coral);
    Serial.println("Coral");
    return;
}

else if(color == "CornflowerBlue")
    {
    showAnalogRGB(CRGB::CornflowerBlue);
    Serial.println("CornflowerBlue");
    return;
}

else if(color == "Cornsilk")
    {
    showAnalogRGB(CRGB::Cornsilk);
    Serial.println("Cornsilk");
    return;
}

else if(color == "Crimson")
    {
    showAnalogRGB(CRGB::Crimson);
    Serial.println("Crimson");
    return;
}

else if(color == "Cyan")
    {
    showAnalogRGB(CRGB::Cyan);
    Serial.println("Cyan");
    return;
}

else if(color == "DarkBlue")
    {
    showAnalogRGB(CRGB::DarkBlue);
    Serial.println("DarkBlue");
    return;
}

else if(color == "DarkCyan")
    {
    showAnalogRGB(CRGB::DarkCyan);
    Serial.println("DarkCyan");
    return;
}

else if(color == "DarkGoldenrod")
    {
    showAnalogRGB(CRGB::DarkGoldenrod);
    Serial.println("DarkGoldenrod");
    return;
}

else if(color == "DarkGray")
    {
    showAnalogRGB(CRGB::DarkGray);
    Serial.println("DarkGray");
    return;
}

else if(color == "DarkGrey")
    {
    showAnalogRGB(CRGB::DarkGrey);
    Serial.println("DarkGrey");
    return;
}

else if(color == "DarkGreen")
    {
    showAnalogRGB(CRGB::DarkGreen);
    Serial.println("DarkGreen");
    return;
}

else if(color == "DarkKhaki")
    {
    showAnalogRGB(CRGB::DarkKhaki);
    Serial.println("DarkKhaki");
    return;
}

else if(color == "DarkMagenta")
    {
    showAnalogRGB(CRGB::DarkMagenta);
    Serial.println("DarkMagenta");
    return;
}

else if(color == "DarkOliveGreen")
    {
    showAnalogRGB(CRGB::DarkOliveGreen);
    Serial.println("DarkOliveGreen");
    return;
}

else if(color == "DarkOrange")
    {
    showAnalogRGB(CRGB::DarkOrange);
    Serial.println("DarkOrange");
    return;
}

else if(color == "DarkOrchid")
    {
    showAnalogRGB(CRGB::DarkOrchid);
    Serial.println("DarkOrchid");
    return;
}

else if(color == "DarkRed")
    {
    showAnalogRGB(CRGB::DarkRed);
    Serial.println("DarkRed");
    return;
}

else if(color == "DarkSalmon")
    {
    showAnalogRGB(CRGB::DarkSalmon);
    Serial.println("DarkSalmon");
    return;
}

else if(color == "DarkSeaGreen")
    {
    showAnalogRGB(CRGB::DarkSeaGreen);
    Serial.println("DarkSeaGreen");
    return;
}

else if(color == "DarkSlateBlue")
    {
    showAnalogRGB(CRGB::DarkSlateBlue);
    Serial.println("DarkSlateBlue");
    return;
}

else if(color == "DarkSlateGray")
    {
    showAnalogRGB(CRGB::DarkSlateGray);
    Serial.println("DarkSlateGray");
    return;
}

else if(color == "DarkSlateGrey")
    {
    showAnalogRGB(CRGB::DarkSlateGrey);
    Serial.println("DarkSlateGrey");
    return;
}

else if(color == "DarkTurquoise")
    {
    showAnalogRGB(CRGB::DarkTurquoise);
    Serial.println("DarkTurquoise");
    return;
}

else if(color == "DarkViolet")
    {
    showAnalogRGB(CRGB::DarkViolet);
    Serial.println("DarkViolet");
    return;
}

else if(color == "DeepPink")
    {
    showAnalogRGB(CRGB::DeepPink);
    Serial.println("DeepPink");
    return;
}

else if(color == "DeepSkyBlue")
    {
    showAnalogRGB(CRGB::DeepSkyBlue);
    Serial.println("DeepSkyBlue");
    return;
}

else if(color == "DimGray")
    {
    showAnalogRGB(CRGB::DimGray);
    Serial.println("DimGray");
    return;
}

else if(color == "DimGrey")
    {
    showAnalogRGB(CRGB::DimGrey);
    Serial.println("DimGrey");
    return;
}

else if(color == "DodgerBlue")
    {
    showAnalogRGB(CRGB::DodgerBlue);
    Serial.println("DodgerBlue");
    return;
}

else if(color == "FireBrick")
    {
    showAnalogRGB(CRGB::FireBrick);
    Serial.println("FireBrick");
    return;
}

else if(color == "FloralWhite")
    {
    showAnalogRGB(CRGB::FloralWhite);
    Serial.println("FloralWhite");
    return;
}

else if(color == "ForestGreen")
    {
    showAnalogRGB(CRGB::ForestGreen);
    Serial.println("ForestGreen");
    return;
}

else if(color == "Fuchsia")
    {
    showAnalogRGB(CRGB::Fuchsia);
    Serial.println("Fuchsia");
    return;
}

else if(color == "Gainsboro")
    {
    showAnalogRGB(CRGB::Gainsboro);
    Serial.println("Gainsboro");
    return;
}

else if(color == "GhostWhite")
    {
    showAnalogRGB(CRGB::GhostWhite);
    Serial.println("GhostWhite");
    return;
}

else if(color == "Gold")
    {
    showAnalogRGB(CRGB::Gold);
    Serial.println("Gold");
    return;
}

else if(color == "Goldenrod")
    {
    showAnalogRGB(CRGB::Goldenrod);
    Serial.println("Goldenrod");
    return;
}

else if(color == "Gray")
    {
    showAnalogRGB(CRGB::Gray);
    Serial.println("Gray");
    return;
}

else if(color == "Grey")
    {
    showAnalogRGB(CRGB::Grey);
    Serial.println("Grey");
    return;
}

else if(color == "Green")
    {
    showAnalogRGB(CRGB::Green);
    Serial.println("Green");
    return;
}

else if(color == "GreenYellow")
    {
    showAnalogRGB(CRGB::GreenYellow);
    Serial.println("GreenYellow");
    return;
}

else if(color == "Honeydew")
    {
    showAnalogRGB(CRGB::Honeydew);
    Serial.println("Honeydew");
    return;
}

else if(color == "HotPink")
    {
    showAnalogRGB(CRGB::HotPink);
    Serial.println("HotPink");
    return;
}

else if(color == "IndianRed")
    {
    showAnalogRGB(CRGB::IndianRed);
    Serial.println("IndianRed");
    return;
}

else if(color == "Indigo")
    {
    showAnalogRGB(CRGB::Indigo);
    Serial.println("Indigo");
    return;
}

else if(color == "Ivory")
    {
    showAnalogRGB(CRGB::Ivory);
    Serial.println("Ivory");
    return;
}

else if(color == "Khaki")
    {
    showAnalogRGB(CRGB::Khaki);
    Serial.println("Khaki");
    return;
}

else if(color == "Lavender")
    {
    showAnalogRGB(CRGB::Lavender);
    Serial.println("Lavender");
    return;
}

else if(color == "LavenderBlush")
    {
    showAnalogRGB(CRGB::LavenderBlush);
    Serial.println("LavenderBlush");
    return;
}

else if(color == "LawnGreen")
    {
    showAnalogRGB(CRGB::LawnGreen);
    Serial.println("LawnGreen");
    return;
}

else if(color == "LemonChiffon")
    {
    showAnalogRGB(CRGB::LemonChiffon);
    Serial.println("LemonChiffon");
    return;
}

else if(color == "LightBlue")
    {
    showAnalogRGB(CRGB::LightBlue);
    Serial.println("LightBlue");
    return;
}

else if(color == "LightCoral")
    {
    showAnalogRGB(CRGB::LightCoral);
    Serial.println("LightCoral");
    return;
}

else if(color == "LightCyan")
    {
    showAnalogRGB(CRGB::LightCyan);
    Serial.println("LightCyan");
    return;
}

else if(color == "LightGoldenrodYellow")
    {
    showAnalogRGB(CRGB::LightGoldenrodYellow);
    Serial.println("LightGoldenrodYellow");
    return;
}

else if(color == "LightGreen")
    {
    showAnalogRGB(CRGB::LightGreen);
    Serial.println("LightGreen");
    return;
}

else if(color == "LightGrey")
    {
    showAnalogRGB(CRGB::LightGrey);
    Serial.println("LightGrey");
    return;
}

else if(color == "LightPink")
    {
    showAnalogRGB(CRGB::LightPink);
    Serial.println("LightPink");
    return;
}

else if(color == "LightSalmon")
    {
    showAnalogRGB(CRGB::LightSalmon);
    Serial.println("LightSalmon");
    return;
}

else if(color == "LightSeaGreen")
    {
    showAnalogRGB(CRGB::LightSeaGreen);
    Serial.println("LightSeaGreen");
    return;
}

else if(color == "LightSkyBlue")
    {
    showAnalogRGB(CRGB::LightSkyBlue);
    Serial.println("LightSkyBlue");
    return;
}

else if(color == "LightSlateGray")
    {
    showAnalogRGB(CRGB::LightSlateGray);
    Serial.println("LightSlateGray");
    return;
}

else if(color == "LightSlateGrey")
    {
    showAnalogRGB(CRGB::LightSlateGrey);
    Serial.println("LightSlateGrey");
    return;
}

else if(color == "LightSteelBlue")
    {
    showAnalogRGB(CRGB::LightSteelBlue);
    Serial.println("LightSteelBlue");
    return;
}

else if(color == "LightYellow")
    {
    showAnalogRGB(CRGB::LightYellow);
    Serial.println("LightYellow");
    return;
}

else if(color == "Lime")
    {
    showAnalogRGB(CRGB::Lime);
    Serial.println("Lime");
    return;
}

else if(color == "LimeGreen")
    {
    showAnalogRGB(CRGB::LimeGreen);
    Serial.println("LimeGreen");
    return;
}

else if(color == "Linen")
    {
    showAnalogRGB(CRGB::Linen);
    Serial.println("Linen");
    return;
}

else if(color == "Magenta")
    {
    showAnalogRGB(CRGB::Magenta);
    Serial.println("Magenta");
    return;
}

else if(color == "Maroon")
    {
    showAnalogRGB(CRGB::Maroon);
    Serial.println("Maroon");
    return;
}

else if(color == "MediumAquamarine")
    {
    showAnalogRGB(CRGB::MediumAquamarine);
    Serial.println("MediumAquamarine");
    return;
}

else if(color == "MediumBlue")
    {
    showAnalogRGB(CRGB::MediumBlue);
    Serial.println("MediumBlue");
    return;
}

else if(color == "MediumOrchid")
    {
    showAnalogRGB(CRGB::MediumOrchid);
    Serial.println("MediumOrchid");
    return;
}

else if(color == "MediumPurple")
    {
    showAnalogRGB(CRGB::MediumPurple);
    Serial.println("MediumPurple");
    return;
}

else if(color == "MediumSeaGreen")
    {
    showAnalogRGB(CRGB::MediumSeaGreen);
    Serial.println("MediumSeaGreen");
    return;
}

else if(color == "MediumSlateBlue")
    {
    showAnalogRGB(CRGB::MediumSlateBlue);
    Serial.println("MediumSlateBlue");
    return;
}

else if(color == "MediumSpringGreen")
    {
    showAnalogRGB(CRGB::MediumSpringGreen);
    Serial.println("MediumSpringGreen");
    return;
}

else if(color == "MediumTurquoise")
    {
    showAnalogRGB(CRGB::MediumTurquoise);
    Serial.println("MediumTurquoise");
    return;
}

else if(color == "MediumVioletRed")
    {
    showAnalogRGB(CRGB::MediumVioletRed);
    Serial.println("MediumVioletRed");
    return;
}

else if(color == "MidnightBlue")
    {
    showAnalogRGB(CRGB::MidnightBlue);
    Serial.println("MidnightBlue");
    return;
}

else if(color == "MintCream")
    {
    showAnalogRGB(CRGB::MintCream);
    Serial.println("MintCream");
    return;
}

else if(color == "MistyRose")
    {
    showAnalogRGB(CRGB::MistyRose);
    Serial.println("MistyRose");
    return;
}

else if(color == "Moccasin")
    {
    showAnalogRGB(CRGB::Moccasin);
    Serial.println("Moccasin");
    return;
}

else if(color == "NavajoWhite")
    {
    showAnalogRGB(CRGB::NavajoWhite);
    Serial.println("NavajoWhite");
    return;
}

else if(color == "Navy")
    {
    showAnalogRGB(CRGB::Navy);
    Serial.println("Navy");
    return;
}

else if(color == "OldLace")
    {
    showAnalogRGB(CRGB::OldLace);
    Serial.println("OldLace");
    return;
}

else if(color == "Olive")
    {
    showAnalogRGB(CRGB::Olive);
    Serial.println("Olive");
    return;
}

else if(color == "OliveDrab")
    {
    showAnalogRGB(CRGB::OliveDrab);
    Serial.println("OliveDrab");
    return;
}

else if(color == "Orange")
    {
    showAnalogRGB(CRGB::Orange);
    Serial.println("Orange");
    return;
}

else if(color == "OrangeRed")
    {
    showAnalogRGB(CRGB::OrangeRed);
    Serial.println("OrangeRed");
    return;
}

else if(color == "Orchid")
    {
    showAnalogRGB(CRGB::Orchid);
    Serial.println("Orchid");
    return;
}

else if(color == "PaleGoldenrod")
    {
    showAnalogRGB(CRGB::PaleGoldenrod);
    Serial.println("PaleGoldenrod");
    return;
}

else if(color == "PaleGreen")
    {
    showAnalogRGB(CRGB::PaleGreen);
    Serial.println("PaleGreen");
    return;
}

else if(color == "PaleTurquoise")
    {
    showAnalogRGB(CRGB::PaleTurquoise);
    Serial.println("PaleTurquoise");
    return;
}

else if(color == "PaleVioletRed")
    {
    showAnalogRGB(CRGB::PaleVioletRed);
    Serial.println("PaleVioletRed");
    return;
}

else if(color == "PapayaWhip")
    {
    showAnalogRGB(CRGB::PapayaWhip);
    Serial.println("PapayaWhip");
    return;
}

else if(color == "PeachPuff")
    {
    showAnalogRGB(CRGB::PeachPuff);
    Serial.println("PeachPuff");
    return;
}

else if(color == "Peru")
    {
    showAnalogRGB(CRGB::Peru);
    Serial.println("Peru");
    return;
}

else if(color == "Pink")
    {
    showAnalogRGB(CRGB::Pink);
    Serial.println("Pink");
    return;
}

else if(color == "Plaid")
    {
    showAnalogRGB(CRGB::Plaid);
    Serial.println("Plaid");
    return;
}

else if(color == "Plum")
    {
    showAnalogRGB(CRGB::Plum);
    Serial.println("Plum");
    return;
}

else if(color == "PowderBlue")
    {
    showAnalogRGB(CRGB::PowderBlue);
    Serial.println("PowderBlue");
    return;
}

else if(color == "Purple")
    {
    showAnalogRGB(CRGB::Purple);
    Serial.println("Purple");
    return;
}

else if(color == "Red")
    {
    showAnalogRGB(CRGB::Red);
    Serial.println("Red");
    return;
}

else if(color == "RosyBrown")
    {
    showAnalogRGB(CRGB::RosyBrown);
    Serial.println("RosyBrown");
    return;
}

else if(color == "RoyalBlue")
    {
    showAnalogRGB(CRGB::RoyalBlue);
    Serial.println("RoyalBlue");
    return;
}

else if(color == "SaddleBrown")
    {
    showAnalogRGB(CRGB::SaddleBrown);
    Serial.println("SaddleBrown");
    return;
}

else if(color == "Salmon")
    {
    showAnalogRGB(CRGB::Salmon);
    Serial.println("Salmon");
    return;
}

else if(color == "SandyBrown")
    {
    showAnalogRGB(CRGB::SandyBrown);
    Serial.println("SandyBrown");
    return;
}

else if(color == "SeaGreen")
    {
    showAnalogRGB(CRGB::SeaGreen);
    Serial.println("SeaGreen");
    return;
}

else if(color == "Seashell")
    {
    showAnalogRGB(CRGB::Seashell);
    Serial.println("Seashell");
    return;
}

else if(color == "Sienna")
    {
    showAnalogRGB(CRGB::Sienna);
    Serial.println("Sienna");
    return;
}

else if(color == "Silver")
    {
    showAnalogRGB(CRGB::Silver);
    Serial.println("Silver");
    return;
}

else if(color == "SkyBlue")
    {
    showAnalogRGB(CRGB::SkyBlue);
    Serial.println("SkyBlue");
    return;
}

else if(color == "SlateBlue")
    {
    showAnalogRGB(CRGB::SlateBlue);
    Serial.println("SlateBlue");
    return;
}

else if(color == "SlateGray")
    {
    showAnalogRGB(CRGB::SlateGray);
    Serial.println("SlateGray");
    return;
}

else if(color == "SlateGrey")
    {
    showAnalogRGB(CRGB::SlateGrey);
    Serial.println("SlateGrey");
    return;
}

else if(color == "Snow")
    {
    showAnalogRGB(CRGB::Snow);
    Serial.println("Snow");
    return;
}

else if(color == "SpringGreen")
    {
    showAnalogRGB(CRGB::SpringGreen);
    Serial.println("SpringGreen");
    return;
}

else if(color == "SteelBlue")
    {
    showAnalogRGB(CRGB::SteelBlue);
    Serial.println("SteelBlue");
    return;
}

else if(color == "Tan")
    {
    showAnalogRGB(CRGB::Tan);
    Serial.println("Tan");
    return;
}

else if(color == "Teal")
    {
    showAnalogRGB(CRGB::Teal);
    Serial.println("Teal");
    return;
}

else if(color == "Thistle")
    {
    showAnalogRGB(CRGB::Thistle);
    Serial.println("Thistle");
    return;
}

else if(color == "Tomato")
    {
    showAnalogRGB(CRGB::Tomato);
    Serial.println("Tomato");
    return;
}

else if(color == "Turquoise")
    {
    showAnalogRGB(CRGB::Turquoise);
    Serial.println("Turquoise");
    return;
}

else if(color == "Violet")
    {
    showAnalogRGB(CRGB::Violet);
    Serial.println("Violet");
    return;
}

else if(color == "Wheat")
    {
    showAnalogRGB(CRGB::Wheat);
    Serial.println("Wheat");
    return;
}

else if(color == "White")
    {
    showAnalogRGB(CRGB::White);
    Serial.println("White");
    return;
}

else if(color == "WhiteSmoke")
    {
    showAnalogRGB(CRGB::WhiteSmoke);
    Serial.println("WhiteSmoke");
    return;
}

else if(color == "Yellow")
    {
    showAnalogRGB(CRGB::Yellow);
    Serial.println("Yellow");
    return;
}

else if(color == "YellowGreen")
    {
    showAnalogRGB(CRGB::YellowGreen);
    Serial.println("YellowGreen");
    return;
}

else if(color == "FairyLight")
    {
    showAnalogRGB(CRGB::FairyLight);
    Serial.println("FairyLight");
    return;
}

else if(color == "FairyLightNCC")
    {
    showAnalogRGB(CRGB::FairyLightNCC);
    Serial.println("FairyLightNCC");
    return;
}
}
