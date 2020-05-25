# rotation-of-square-matrix
Rotation of square matrix 

Condition Required:
  Square Matrix
  Angle must be multiple of 90
  Clockwise Rotation
  
  For eg:
  
  1 2 3                             7 4 1                           9 8 7
  4 5 6   ---90 degree clockwise--> 8 5 2 ---90 degree clockwise--> 6 5 4 -- so on---->
  7 8 9                             9 6 3                           3 2 1
  
  For Anticlockwise rotation we can see the pattern(each rotation is of 90 degree as roation must be multiple of 90)
          1 Anticlocwise ---> 3 clockwise roation
          2 Anticlocwise ---> 2 clockwise roation
          3 Anticlocwise ---> 1 clockwise roation
          4 Anticlocwise ---> 0 clockwise roation
  
    You will be asked wether to roatate the Matrix in clockwise or in Anti-Clockwise direction
    
    This code does not do alter the Matrix , it just prints the pattern.
