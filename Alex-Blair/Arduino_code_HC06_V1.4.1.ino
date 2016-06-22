int voltage = 0;
int soil_moist = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Read_soil_Moisture();                                       
  Serial.println(soil_moist);        
  delay(1050);                    
}
void Read_soil_Moisture(){
  voltage = analogRead(0);

  
 
  soil_moist = ((0.545 * voltage) - 0.289);
if (soil_moist > 100){
    soil_moist = 100;
 }
 if (soil_moist < 0){
   soil_moist = 0;
 }

}

