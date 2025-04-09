#include <stdio.h>
//fuction to convert celsius to fahrenheit
float converttofahrenheit(float celsius) {
    return (celsius *9/5) + 32;
}
//function to check the comfort level based on current and desired temp
const char* checkcomfortLevel(float currentTempF, float desiredTempF) {
    float tolerance = 2.0;//tolerance in farenheit

    //check if the current temperature is within the comfort range
if (currentTempF >= desiredTempF - tolerance && currentTempF <= desiredTempF + tolerance) {
    return "comfortable";
} else if (currentTempF < desiredTempF) {
    return "Too cold";
} else {
    return "Too hot";
}
} // Closing brace for checkcomfortLevel function

int main() {
    float celsius, currentTempF, desiredTempF;
    //input temp in celsius
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    //input the desired temperaturein Fahrenheit
    printf("Enter desired temperature in Fahrenheit: ");
    scanf("%f", &desiredTempF);
    //display the converted temperaturein fahrenheit
    //convert and display the converted temperature in fahrenheit
    currentTempF = converttofahrenheit(celsius);
    printf("Converted temperature: %.2fF\n", currentTempF);
    const char* comfortLevel = checkcomfortLevel(currentTempF, desiredTempF);
    printf("comfortLevel: %s\n", comfortLevel);

    return 0;
}
