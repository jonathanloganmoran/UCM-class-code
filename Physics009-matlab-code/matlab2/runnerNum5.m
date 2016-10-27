%Miguel Hernandez
%Physics 009H
%5. Using the function you wrote in (1), 
%and the integral of the function 
%y(x) = e^x, between x0 = 0 and xn = 25. Choose an appropriate 
%dx so that your result is close to the actual value of the integral 
%(You will have to find the value of the integral using your knowledge of calculus).

dx = .001;
x = 0:dx:25;

y = exp^(x);

areaOfExp = trapezoidIntegral(x, y)


