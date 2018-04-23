int main(int argc, char const *argv[]) {
  //This will have all of the function calls
  //Start I2C stuff
  while (loop) {
    if (accData != 0)
    {
        int degrees = getDegrees();
        printf("%s\n", degrees );
        double aOpenTime = toTurn(degrees);
        printf("%s\n", aOpenTime);
        //Start up
    }
  }
  //End I2C Stuff
  return 0;
}

double toTurn(int turnDeg){
  double aOpenTime;
  //Insert function of number of degrees with an output of time here.
  aOpenTime = degreeCalculation(turnDeg);
  return aOpenTime;
}

double degreeCalculation(int deg){
  //Compute the Time needed open.
  double aOpenTime;
  return aOpenTime;
}

int degrees (){
  //Get data from xbee file
  return degrees;
}
