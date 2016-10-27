%Miguel Hernandez
%Physics 009H
%3. Using the function you wrote in (1), 
%?nd the integral of the function y(x) = 4x, between x0 = 0 and xn = 20. 
%Choose an appropriate ?x so that your result is close to the actual value of the integral 
%(You will have to ?nd the value of the integral using your knowledge of calculus).

dx = 1;
x = 0:dx:20;
y = 4 .* x;

area = trapezoidIntegral(x, y)
