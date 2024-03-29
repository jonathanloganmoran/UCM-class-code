%Miguel Hernandez
%Physics 009H
%4. Odd and even functions. Using the function you wrote in (1), 
%?nd the integral of the functions y(x) = sinx, and y(x) = cosx, 
%between x0 = ? ?/2 and xn = ?/2. Choose an appropriate ?x so that 
%your result is close to the actual value of the integral 
%(You will have to ?nd the value of the integral using your knowledge of calculus). 
%Interpret the results in terms of odd and even functions.

dx = .001;
x = (-pi/2):dx:(pi/2);

y1 = cos(x);
y2 = sin(x);

areaOfCos = trapezoidIntegral(x, y1)
trapzCos = trapz(x, y1)
areaOfSin = trapezoidIntegral(x, y2)
trapzSin = trapz(x, y2)