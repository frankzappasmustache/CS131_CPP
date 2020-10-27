# ** Lab Description - [Lab 3a](https://btc.instructure.com/courses/1997077/assignments/20565642?module_item_id=48224045)

## * Target Heart-Rate Calculator:
While exercising, one can use a heart-rate monitor to see that their heart rate stays within a safe range suggested by their trainers and doctors. According to the American Heart Association (AHA), the formula for calculating one's maximum heart rate in beats per minute is 220 minus their age in years. One's target heart rate is a range that is 50–85% of their maximum heart rate. [Note: These formulas are estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and gender of the individual. Always consult a physician or qualified health care professional before beginning or modifying an exercise program.]

## * Requirements for class definition and program

## * Class definition in header(.h)
   ** Create:
    - [] A class called HeartRates
    *** The class attributes should include the person’s:
      - [] First name
      - [] Last name
      - [] Date of birth
    *** Consisting of separate attributes for:
        - [] The month of birth
        - [] The day of birth
        - [] The year of birth
    *** Your class should have a:
      - [] Constructor that receives this data as parameters
      - [] Get and Set functions for each attribute
      - [] A function getAge that calculates and returns the person’s age (in years)
         - [] Function getAge should prompt the user to enter the current month, day and year before calculating the person’s age
      - [] A function getMaxiumumHeartRate that calculates and returns the person’s maximum heart rate
      - [] A function getTargetHeartRate that calculates and returns the person’s target heart rate

## * Program source-code file (.cpp)
   ** Write an application that:
    - [] Prompts for the person’s information
    - [] Instantiates an object of class HeartRates
    - [] Prints the information from that object
    *** Including the person’s
        - [] First name
        - [] Last name
        - [] Date of birth
    - [] Then calculates and prints the person’s:
       - [] Age (years)
       - [] Maximum heart rate
       - [] Target-heart-rate range